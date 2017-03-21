#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int *a = malloc(1000000000000000);
    if (a == NULL) { printf("Could not allocate!\n"); }
    free(a);
}
