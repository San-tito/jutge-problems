const api_client = {
  API_URL: "https://api.jutge.org/api",
  meta: undefined,

  execute: async function (func, input, ifiles = []) {
    const iform = new FormData();
    const idata = { func, input, meta: this.meta };
    iform.append("data", JSON.stringify(idata));
    for (const index in ifiles) iform.append(`file_${index}`, ifiles[index])

    const response = await fetch(this.API_URL, { method: "POST", body: iform });
    const content = response.headers
      .get("content-type")
      ?.split(";")[0]
      .toLowerCase();
    if (content !== "multipart/form-data")
      throw new Error("Invalid content type");

    const oform = await response.formData();
    const odata = oform.get("data");
    const { output, error } = JSON.parse(odata);

    if (error) throw new Error(error.message || "Unknown error");

    const ofiles = []
    for (const [key, value] of oform.entries()) {
      if (value instanceof File) {
        ofiles.push({
          data: new Uint8Array(await value.arrayBuffer()),
          name: value.name,
          type: value.type,
        })
      }
    }

    return [output, ofiles]
  },

  // Helper: Get problem_id from problem_nm (selects preferred language)
  getProblemId: async function (problem_nm) {
    const [{ problems }] = await this.execute(
      "problems.getAbstractProblem",
      problem_nm,
    );
    const preference = ["en", "es", "ca"];
    for (const lang of preference) {
      const match = Object.values(problems).find((p) => p.language_id === lang);
      if (match) return match.problem_id;
    }
    return Object.values(problems)[0].problem_id;
  },

  // Auth endpoints
  login: async function (email, password) {
    const [{ token }] = await this.execute("auth.login", { email, password });
    this.meta = { token };
  },

  logout: async function () {
    await this.execute("auth.logout", {});
    this.meta = undefined;
  },

  // Problems endpoints (all work with problem_nm)
  abstractproblem: async function (problem_nm) {
    const [result] = await this.execute("problems.getAbstractProblem", problem_nm);
    return result;
  },

  statement: async function (problem_nm, format = "markdown") {
    const problem_id = await this.getProblemId(problem_nm);
    const endpoint = {
      markdown: "problems.getMarkdownStatement",
      html: "problems.getHtmlStatement",
      text: "problems.getTextStatement",
      pdf: "problems.getPdfStatement",
    }[format];
    if (!endpoint) throw new Error(`Unknown format: ${format}`);
    const [result] = await this.execute(endpoint, problem_id);
    return result;
  },

  templates: async function (problem_nm) {
    const problem_id = await this.getProblemId(problem_nm);
    const [result] = await this.execute("problems.getTemplates", problem_id);
    return result;
  },

  template: async function (problem_nm, template_name) {
    const problem_id = await this.getProblemId(problem_nm);
    const [result, files] = await this.execute("problems.getTemplate", {
      problem_id,
      template: template_name,
    });
    return { data: result, files };
  },

  testcases: async function (problem_nm) {
    const problem_id = await this.getProblemId(problem_nm);
    const [result] = await this.execute("problems.getPublicTestcases", problem_id);
    return result;
  },

  samples: async function (problem_nm) {
    const problem_id = await this.getProblemId(problem_nm);
    const [result] = await this.execute("problems.getSampleTestcases", problem_id);
    return result;
  },

  zip: async function (problem_nm) {
    const problem_id = await this.getProblemId(problem_nm);
    const [result, files] = await this.execute("problems.getZipStatement", problem_id);
    return { data: result, files };
  },

  // Student profile endpoints
  profile: async function () {
    const [result] = await this.execute("student.profile.get", {});
    return result;
  },

  // Student submissions endpoints
  submit: async function (problem_nm, code, compiler_id = "P1++", annotation = "") {
    const problem_id = await this.getProblemId(problem_nm);
    const now = new Date();
    const date = now.toLocaleDateString("en-GB");
    const time = now.toLocaleTimeString("en-GB", { hour12: false });

    const [{ submission_id }] = await this.execute("student.submissions.submit", {
      problem_id,
      compiler_id,
      code,
      annotation: annotation || `Sent through the API on ${date} at ${time}`,
    });

    return { problem_id, submission_id };
  },

  submissions: async function (problem_nm) {
    const [result] = await this.execute(
      "student.submissions.indexForAbstractProblem",
      problem_nm,
    );
    return result;
  },

  submission: async function (problem_id, submission_id) {
    const [result] = await this.execute("student.submissions.get", {
      problem_id,
      submission_id,
    });
    return result;
  },

  submissionscode: async function (problem_id, submission_id) {
    const [result] = await this.execute("student.submissions.getCodeAsB64", {
      problem_id,
      submission_id,
    });
    return result;
  },

  submissionanalysis: async function (problem_id, submission_id) {
    const [result] = await this.execute("student.submissions.getAnalysis", {
      problem_id,
      submission_id,
    });
    return result;
  },

  // Student status endpoints
  status: async function (problem_nm) {
    const [result] = await this.execute(
      "student.statuses.getForAbstractProblem",
      problem_nm,
    );
    return result;
  },

  statuses: async function () {
    const [result] = await this.execute("student.statuses.getAll", {});
    return result;
  },

  // Student courses endpoints
  courses: async function () {
    const [result] = await this.execute("student.courses.indexEnrolled", {});
    return result;
  },

  coursesavailable: async function () {
    const [result] = await this.execute("student.courses.indexAvailable", {});
    return result;
  },

  course: async function (course_key) {
    const [result] = await this.execute("student.courses.getEnrolled", course_key);
    return result;
  },

  // Student lists endpoints
  lists: async function () {
    const [result] = await this.execute("student.lists.getAll", {});
    return result;
  },

  list: async function (list_key) {
    const [result] = await this.execute("student.lists.get", list_key);
    return result;
  },

  // Student keys endpoints
  keys: async function () {
    const [result] = await this.execute("student.keys.get", {});
    return result;
  },
};

export default api_client;
