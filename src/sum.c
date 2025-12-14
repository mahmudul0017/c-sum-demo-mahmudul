#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    printf("Sum of %d and %d = %d\n", x, y, sum(x, y));
    return 0;
}
