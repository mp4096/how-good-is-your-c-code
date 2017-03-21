#include <stdio.h>
#include <limits.h>

int foo(int x) {
    return (x + 1) > x;
}

int main(void) {
    printf("Literal:       %d\n", (INT_MAX + 1) > INT_MAX);
    printf("Function call: %d\n", foo(INT_MAX));
    return 0;
}