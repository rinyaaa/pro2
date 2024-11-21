#include <stdio.h>

int main(int argc, const char *argv[]) {
    int a[] = {0, 1, 2, 3, 4};

    int *pa;
    pa = a;

    for(int i = 0; i < sizeof(a) / sizeof(int); i++) {
        printf(" %d: %p\n", i, pa + i);
    }

    printf("\n");
    for(int i = 0; i < sizeof(a) / sizeof(int); i++) {
        printf(" %d: %p\n", i, &a[i]);
    }

    return 0;
}