#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
sudo ar rcs liball.a *.o