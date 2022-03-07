#!/bin/bash

dirsToRemove=".git .info .tests"
filesToRemove=".gitignore"

echo "Removing directories:\n$dirsToRemove"
rm -rf $dirsToRemove

echo "Removing files"
rm $filesToRemove

echo "Removing script"
rm $0
