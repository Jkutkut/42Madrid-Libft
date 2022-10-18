#!/bin/sh

tests="https://github.com/alelievr/libft-unit-test.git https://github.com/Tripouille/libftTester.git https://github.com/y3ll0w42/libft-war-machine.git"

for t in $tests; do
	echo "Cloning $t"
	git clone $t
done

echo "Done"