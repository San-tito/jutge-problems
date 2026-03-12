#!/bin/node
import path from "path";
import api_client from "./api_client.js";

async function main() {
  const script = path.basename(process.argv[1]);
  const problem_id = process.argv[2];
  const submission_id = process.argv[3];
  const email = process.env.JUTGE_EMAIL;
  const password = process.env.JUTGE_PASSWORD;

  if (!problem_id || !submission_id) {
    console.error(`${script} <problem_id> <submission_id>`);
    process.exit(1);
  }

  try {
    await api_client.login(email, password);
    const submission = await api_client.submission(problem_id, submission_id);
    console.log(JSON.stringify(submission, null, 2));
  } catch (err) {
    console.error(script, "❌", err.message);
    process.exit(1);
  }
}

main();
