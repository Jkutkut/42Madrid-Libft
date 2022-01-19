#!/bin/sh


# printf "******** Testing gcc *********\n";
for ft in $(find . -name ft*.c); do
	break
	dir=$(printf $ft | sed -E 's/\/[^/]+\.c$//g');
	echo "Compiling $ft"
	gcc -Wall -Wextra -Werror $dir/*.c ||
	printf "*********** fail *************\nFail at dir: $dir\n - File name: $ft\n";
done

printf "\n\n******** Testing norminette *********\n";
for ft in $(find . -name ft*.c); do
	norminette -R CheckForbiddenSourceHeader $ft ||
	(echo "*********** fail *************\n Error at $ft"; break;)
done


if [ -f a.out ]; then
	rm a.out;
fi


