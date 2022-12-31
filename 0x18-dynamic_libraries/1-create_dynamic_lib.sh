#!/bin/bash

gcc -wall -wextra -werror -pedantic -c -fPIC -shared -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
