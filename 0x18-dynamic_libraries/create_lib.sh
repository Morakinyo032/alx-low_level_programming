#!/bin/bash
gcc -c -fPIC *.c && gcc -shared -o liballtest.so *.o
