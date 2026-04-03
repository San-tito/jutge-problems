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
  const problem_id = process.argv[2];
  const compiler_id = process.argv[3];
  const email = process.env.JUTGE_EMAIL;
  const password = process.env.JUTGE_PASSWORD;

  if (!problem_id || !compiler_id) {
    console.error(`${script} <problem_id> <compiler_id>`);
    console.error("Example: clang-format solution.cpp | submit P12345_en P1++");
    process.exit(1);
  }

  try {
    const code = await read_stdin();
    if (!code) {
      console.error(`${script}: no code provided on stdin`);
      process.exit(1);
    }

    await api_client.login(email, password);

    const submission_id = await api_client.submit(problem_id, code, compiler_id);

    console.log(`✓ Submitted: ${submission_id}`);
    console.log(`\nTo check verdict:`);
    console.log(`  submission ${problem_id} ${submission_id}`);

    let verdict = null;
    const interval = 1000;
    const maxWait = 30000;
    let elapsed = 0;

    while (elapsed < maxWait) {
      await new Promise((r) => setTimeout(r, interval));
      elapsed += interval;

      try {
        const state = await api_client.submission(problem_id, submission_id);

        if (state.state === "done") {
          verdict = state.veredict || state.verdict || "unknown";
          console.log(`\n✓ Verdict: ${verdict}`);
          break;
        } else {
          process.stdout.write(".");
        }
      } catch (err) {
        process.stdout.write("!");
      }
    }

    if (!verdict) {
      console.log("\n⏳ Still processing... check verdict later");
    }
  } catch (err) {
    console.error(script, "❌", err.message);
    process.exit(1);
  }
}

main();
