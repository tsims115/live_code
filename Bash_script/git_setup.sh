#!/bin/bash
mkdir SetThisUp
cd SetThisUp
git init
git config --global user.email "example@yahoo.com"
git config --global user.name "username"
echo "# This is a TestRepo" > README.md
git add README.md
git commit -m "Adding README.md"
git branch -M main
git remote add origin "GithubRepoURL"
git push -u origin main