#!/usr/bin/env node
import path from "path";
import fs from "fs";
import api_client from "./api_client.js";

async function main() {
  const script = path.basename(process.argv[1]);
  const problem_id = process.argv[2];
  const template_name = process.argv[3] || "public.tar";
  const output = process.argv[4];

  const email = process.env.JUTGE_EMAIL;
  const password = process.env.JUTGE_PASSWORD;

  if (!problem_id) {
    console.error(`Usage: ${script} <problem_id> [template] [output]`);
    process.exit(1);
  }

  try {
    await api_client.login(email, password);

    console.log(`📥 Downloading ${template_name} for ${problem_id}...`);

    const { data, files } = await api_client.template(problem_id, template_name);

    if (files && files.length > 0) {
      const file = files[0];
      const filename = output || file.name;

      fs.mkdirSync(path.dirname(filename), { recursive: true });
      fs.writeFileSync(filename, Buffer.from(file.data));

      console.log(`✓ Saved to ${filename}`);
    } else {
      console.log(data);
    }

    await api_client.logout();
  } catch (err) {
    console.error(`${script} ❌ ${err.message}`);
    process.exit(1);
  }
}

main();
