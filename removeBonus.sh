#!/bin/bash

echo "Changing Makefile and header"
mv .info/Makefile Makefile
mv .info/libft.h libft.h

echo "Removing bonus code"
rm *_bonus.c

rm $0
