#!/bin/bash

mkdir out 2>/dev/null

FILE_COUNT=$(ls ./src | wc -l)

echo "compiling ..."

for ((i = 1; i < $FILE_COUNT + 1; i++)); do
	gcc -fdiagnostics-color=always -g ./src/exo$i.c -o ./out/exo$i.out
done
