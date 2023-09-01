#!/bin/bash
gcc -wall -pedantic -werror -wextra -o *.o
ar -re liball.a *.o
ranlib liball.a
