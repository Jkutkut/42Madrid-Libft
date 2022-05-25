#!/bin/bash

if [ -d .git ]; then
	location="./"
else
	location="../"
fi

dirsToRemove=".git .info .tests .vscode bin scripts"
filesToRemove=".gitignore"

echo "Removing directories:\n$dirsToRemove"
rm -rf $location$dirsToRemove

echo "Removing files"
rm $filesToRemove

echo "Removing script"
rm $0
