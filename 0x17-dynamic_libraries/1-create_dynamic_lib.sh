#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -g -fPIC *.c -shared -o liball.so
