#!/usr/bin/env bash
set -euo pipefail

PROBLEM_ID="${1:-$(basename "$PWD")}"
SOURCE_FILE="main.cc"
COMPILER_ID="P1++"

if [[ -z "${JUTGE_EMAIL:-}" || -z "${JUTGE_PASSWORD:-}" ]]; then
  echo "Missing JUTGE_EMAIL or JUTGE_PASSWORD" >&2
  exit 1
fi

if [[ ! -f "$SOURCE_FILE" ]]; then
  echo "Missing source file: $SOURCE_FILE" >&2
  exit 1
fi

jutge login --email "$JUTGE_EMAIL" --password "$JUTGE_PASSWORD"

CODE=$(clang-format "$SOURCE_FILE")
ANNOTATION="Sent through the API on $(date +"%d/%m/%Y %H:%M:%S")"

SUBMISSION_ID=$(jutge student submissions submit \
  --problem_id "$PROBLEM_ID" \
  --compiler_id "$COMPILER_ID" \
  --annotation "$ANNOTATION" \
  --code "$CODE")

while true; do
  STATUS=$(jutge student submissions get \
      --problem_id "$PROBLEM_ID" \
      --submission_id "$SUBMISSION_ID" \
      --json)
  STATE=$(jq -r '.state' <<< "$STATUS")
  [[ "$STATE" == "done" ]] && { jq -r '.veredict' <<< "$STATUS"; break; }
  sleep 1
done
