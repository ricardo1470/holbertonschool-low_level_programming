#!/bin/bash
gcc -Wall -c -fPIC *.c
gcc -shared -o liball.so *.o