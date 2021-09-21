#!/bin/bash
gcc *.c -c -fpic
gcc -shared -o liball.so *.o
>&2 echo "Anything"
