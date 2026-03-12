#!/bin/node
import path from "path";
import fs from "fs";
import api_client from "./api_client.js";

async function main() {
  const script = path.basename(process.argv[1]);
  const problem_id = process.argv[2];
  const template_name = process.argv[3];
  const output = process.argv[4];
  const email = process.env.JUTGE_EMAIL;
  const password = process.env.JUTGE_PASSWORD;


  try {
    await api_client.login(email, password);
    
    // First, list available templates
    console.log(`\n📦 Available templates for ${problem_id}:`);
    const templates = await api_client.templates(problem_id);
    templates.forEach((t, i) => console.log(`   ${i + 1}. ${t}`));
    
    // Check if requested template exists
    if (!templates.includes(template_name)) {
      console.error(`\n❌ Template "${template_name}" not found`);
      console.error(`Available: ${templates.join(', ')}`);
      process.exit(1);
    }
    
    // Download the template
    console.log(`\n📥 Downloading ${template_name}...`);
    const { data, files } = await api_client.getTemplate(problem_id, template_name);
    
    if (files && files.length > 0) {
      const file = files[0];
      const filename = output || file.name;
      fs.writeFileSync(filename, Buffer.from(file.data));
      console.log(`✓ Saved to ${filename}`);
    } else {
      console.log(data);
    }
  } catch (err) {
    console.error(script, "❌", err.message);
    process.exit(1);
  }
}

main();
