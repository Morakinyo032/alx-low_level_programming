#!/bin/bash
gcc -fPIC -shared -o libjack.so jack.c
LD_PRELOAD=$PWD/libjack.so ./gm
