#!/bin/sh

for f in $(ls *.c); do
	norminette $f || break
done