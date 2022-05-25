#!/bin/sh

tests="https://github.com/alelievr/libft-unit-test.git https://github.com/Tripouille/libftTester.git https://github.com/y3ll0w42/libft-war-machine.git"

for i in $tests; do
	echo "Cloning $i"
	# git clone $t
done

echo "Done"