#include <stdio.h>

#define ADD_TEN(a) for(int i = 0; i < 10; i++) { a++; }

int main(void) {
    int i = 42, a = 42;
    ADD_TEN(i)
    ADD_TEN(a)
    printf("i = %d, a = %d\n", i, a);
    return 0;
}
