const api_client = {
  API_URL: "https://api.jutge.org/api",
  meta: undefined,

  execute: async function (func, input) {
    const iform = new FormData();
    const idata = { func, input, meta: this.meta };
    iform.append("data", JSON.stringify(idata));

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
    return output;
  },

  login: async function (email, password) {
    const { token } = await this.execute("auth.login", { email, password });
    this.meta = { token };
  },

  statement: async function (problem_nm) {
    const { problems } = await this.execute(
      "problems.getAbstractProblem",
      problem_nm,
    );
    const problem_id = Object.values(problems).at(-1).problem_id;
    return await this.execute("problems.getMarkdownStatement", problem_id);
  },

  status: async function (problem_nm) {
    return await this.execute(
      "student.statuses.getForAbstractProblem",
      problem_nm,
    );
  },

  submit: async function (problem_nm, code) {
    const { problems } = await this.execute(
      "problems.getAbstractProblem",
      problem_nm,
    );
    const problem_id = Object.values(problems).at(-1).problem_id;

    const now = new Date();
    const date = now.toLocaleDateString("en-GB");
    const time = now.toLocaleTimeString("en-GB", { hour12: false });

    const submission_id = await this.execute("student.submissions.submit", {
      compiler_id: "P1++",
      problem_id,
      annotation: `Sent through the API on ${date} at ${time}`,
      code,
    });

    return { problem_id, submission_id };
  },

  submission: async function (problem_id, submission_id) {
    return await this.execute("student.submissions.get", {
      problem_id,
      submission_id,
    });
  },
};

export default api_client;
