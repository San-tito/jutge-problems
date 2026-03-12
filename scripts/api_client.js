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

  login: async function (email, password) {
    const [{ token }] = await this.execute("auth.login", { email, password });
    this.meta = { token };
  },

  logout: async function () {
    await this.execute("auth.logout", {});
    this.meta = undefined;
  },

  templates: async function (problem_id) {
    const [result] = await this.execute("problems.getTemplates", problem_id);
    return result;
  },

  template: async function (problem_id, template) {
    const [result, files] = await this.execute("problems.getTemplate", {
      problem_id,
      template,
    });
    return { data: result, files };
  },

  submit: async function (problem_id, code, compiler_id, annotation = "") {
    const now = new Date();
    const date = now.toLocaleDateString("en-GB");
    const time = now.toLocaleTimeString("en-GB", { hour12: false });

    const [{ submission_id }] = await this.execute("student.submissions.submit", {
      problem_id,
      compiler_id,
      code,
      annotation: annotation || `Sent through the API on ${date} at ${time}`,
    });

    return submission_id;
  },

  submission: async function (problem_id, submission_id) {
    const [result] = await this.execute("student.submissions.get", {
      problem_id,
      submission_id,
    });
    return result;
  },

  status: async function (problem_nm) {
    const [result] = await this.execute("student.statuses.getForAbstractProblem", problem_nm);
    return result;
  },
};

export default api_client;
