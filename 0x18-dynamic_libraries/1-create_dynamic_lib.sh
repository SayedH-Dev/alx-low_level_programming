#!/bin/bash
for src_file in *.c
do
	gcc -c -fPIC "$src_file" -o "${src_file%.c}.o"
done
gcc -shared -o liball.so *.o
rm *.o
