#!/bin/node
import path from "path";
import api_client from "./api_client.js";

async function read_stdin() {
  return new Promise((resolve, reject) => {
    let code = "";
    process.stdin.setEncoding("utf8");
    process.stdin.on("data", (chunk) => (code += chunk));
    process.stdin.on("end", () => resolve(code.trim()));
    process.stdin.on("error", reject);
  });
}

async function main() {
  const script = path.basename(process.argv[1]);
  const problem_nm = process.argv[2];
  const email = process.env.JUTGE_EMAIL;
  const password = process.env.JUTGE_PASSWORD;

  if (!problem_nm) {
    console.error(`${script} <problem_nm>`);
    process.exit(1);
  }

  try {
    const code = await read_stdin();
    if (!code) {
      console.error(`${script}: no code provided on stdin`);
      process.exit(1);
    }

    await api_client.login(email, password);

    const { problem_id, submission_id } = await api_client.submit(
      problem_nm,
      code,
    );
    console.log(` Submitted: ${submission_id}`);

    let verdict = null;
    while (!verdict) {
      await new Promise((r) => setTimeout(r, 1000));
      const state = await api_client.submission(problem_id, submission_id);

      if (state.state === "done") {
        verdict = state.verdict || state.veredict || "unknown";
        console.log(`\n Verdict: ${verdict}`);
      } else {
        process.stdout.write(".");
      }
    }
  } catch (err) {
    console.error(script, "❌", err.message || err);
  }
}

main();
