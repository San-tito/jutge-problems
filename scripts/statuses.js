#!/bin/node
import path from "path";
import api_client from "./api_client.js";

async function main() {
  const script = path.basename(process.argv[1]);
  const email = process.env.JUTGE_EMAIL;
  const password = process.env.JUTGE_PASSWORD;

  try {
    await api_client.login(email, password);
    const statuses = await api_client.statuses();
    console.log(JSON.stringify(statuses, null, 2));
  } catch (err) {
    console.error(script, "❌", err.message);
    process.exit(1);
  }
}

main();
