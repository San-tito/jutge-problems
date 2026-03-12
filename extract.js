#!/bin/node
import fs from "fs";
import path from "path";
import { execSync } from "child_process";

try {
  console.log("Extracting Pro2_PRO2_2026P.zip to problems/...");
  execSync("unzip -q Pro2_PRO2_2026P.zip -d problems/", { stdio: "inherit" });
  console.log("✓ Extraction complete!");
  
  // List extracted problems
  const problemsDir = "./problems";
  const dirs = fs.readdirSync(problemsDir)
    .filter(f => fs.statSync(path.join(problemsDir, f)).isDirectory())
    .filter(f => /^[A-Z]\d+$/.test(f))
    .sort();
  
  console.log(`\nFound ${dirs.length} problems:`);
  dirs.slice(0, 20).forEach(d => console.log(`  ${d}`));
  if (dirs.length > 20) console.log(`  ... and ${dirs.length - 20} more`);
} catch (err) {
  console.error("Error:", err.message);
  process.exit(1);
}
