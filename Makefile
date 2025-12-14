CC=gcc
CFLAGS=-Wall -Wextra -O2

all: build test

build:
    $(CC) $(CFLAGS) -o sum src/sum.c

test:
    $(CC) $(CFLAGS) -o test tests/test_sum.c
    ./test

clean:
    rm -f sum test
