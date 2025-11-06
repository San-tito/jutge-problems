#!/bin/node
import path from "path";
import api_client from "./api_client.js";

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
    await api_client.login(email, password);

    const statement = await api_client.statement(problem_nm);
    console.log(statement);
  } catch (err) {
    console.error(script, "❌", err.message || err);
  }
}

main();
