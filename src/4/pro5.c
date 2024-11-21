#include <stdio.h>

int main(int argc, const char *argv[]) {
    int a[5] = {10, 20, 30, 40, 50};

    int *p = a;

    for(int i = 0; i < sizeof(a) / sizeof(int); i++) {
        *(p + i) = *(p + i) + 1;
        printf("%d\n", a[i]);
    }

    return 0;
}