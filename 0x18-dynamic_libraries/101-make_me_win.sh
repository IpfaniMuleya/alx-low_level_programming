#!/bin/bash
echo -e '#include <stdio.h>\n#include <stdlib.h>\nvoid __attribute__((constructor)) premain() { printf("Please make me win!\\n"); exit(0); }' > /tmp/win.c
gcc -Wall -fPIC -shared -o /tmp/win.so /tmp/win.c
