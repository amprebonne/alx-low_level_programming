#!/bin/bash

# Check if a file name is provided as an argument
if [ -z "$1" ]; then
  echo "Please provide the name of the file."
  exit 1
fi

file_name="$1"

# Git add
git add "$file_name"

# Git commit
git commit -m "Made changes in $file_name"

# Git push to current branch
current_branch=$(git symbolic-ref --short HEAD)
git push origin "$current_branch"
