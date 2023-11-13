#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -FPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRAY_PATH=.:$LD_LIBRARY_PATH
