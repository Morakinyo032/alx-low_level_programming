#!/bin/bash
gcc -c -fPIC puts.c
gcc -shared -o lib_test.so puts.o
export LD_PRELOAD=$PWD/libtest.so
