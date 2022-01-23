#!/bin/sh

#colors:
NC='\033[0m' # No Color
RED='\033[0;31m'
GREEN='\033[0;32m'
LRED='\033[1;31m'
LGREEN='\033[1;32m'
YELLOW='\033[1;33m'
LBLUE='\033[1;34m'
TITLE='\033[38;5;33m'

tmpFile=norminetteTmp

if [ "$1" = "--help" ]; then
	{
	echo "                              ${TITLE}Test norminette help${NC}"

	# Title
	echo "${TITLE}NAME${NC}"
	echo "\ttest_norminette - test norminette.\n"

	# Synopsis
	echo "${TITLE}SYNOPSIS${NC}"
	echo "\t./test_norminette [OPTION]...\n"

	# Description
	echo "${TITLE}DESCRIPTION${NC}"
	echo "\tRuns norminette tests on .c and .h files in the current directory.\n"

	# Options
	echo "${TITLE}OPTIONS${NC}"
	echo "\t${YELLOW}--help${NC}"
	echo "\t\tDisplays the help documentation.\n"
	echo "\t${YELLOW}--warn${NC}"
	echo "\t\tIf a file ${LRED}failed${NC} the test, just show the ${YELLOW}warning${NC}."
	echo "\t\tIf not used, the script will end on the first ${LRED}error${NC}.\n"
	} > testNorminetteHelp.tmp
	less testNorminetteHelp.tmp
	rm -f testNorminetteHelp.tmp
	return
else
echo "${TITLE}
  _   _                      _            _   _
 | \ | | ___  _ __ _ __ ___ (_)_ __   ___| |_| |_ ___ 
 |  \| |/ _ \| '__| '_ \` _ \| | '_ \ / _ \ __| __/ _ \\
 | |\  | (_) | |  | | | | | | | | | |  __/ |_| ||  __/
 |_| \_|\___/|_|  |_| |_| |_|_|_| |_|\___|\__|\__\___|\n\n${NC}"
fi

if [ "$1" = "--warn" ]; then
	stopOnError=false
else
	stopOnError=true
fi

for f in $(ls *.h *.c); do
	if [ ! -f "$f" ]; then
		echo "${LRED}$f${NC} is not a file"
		break;
	fi

	if expr "$f" : '.*\.c$' > /dev/null; then
		norminette $f > $tmpFile
	else
		norminette -R CheckForbiddenSourceHeader $f > $tmpFile
	fi &&
	echo "$f:\t${LGREEN}OK!${NC}" ||
	{
		echo "$f: ${LRED}Error!${NC}"
		sed -n '2,$p' $tmpFile
		if [ $stopOnError = true ]; then
			break
		fi
	}
done

rm -f $tmpFile
