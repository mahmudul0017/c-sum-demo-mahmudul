CC=gcc
CFLAGS=-Wall -Wextra -O2

all: build test

build:
     gcc -o sum src/sum.c

test:
     gcc -o test tests/test_sum.c
     ./test


clean:
    rm -f sum test
