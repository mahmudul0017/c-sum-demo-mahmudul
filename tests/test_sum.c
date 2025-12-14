#include <assert.h>
#include <stdio.h>

int sum(int, int);
#include "../src/sum.c"

int main() {
    assert(sum(2, 3) == 5);
    assert(sum(10, 20) == 30);
    assert(sum(-5, 5) == 0);
    printf("All tests passed!\n");
    return 0;
}
