#include <stdio.h>

int main(int argc, const char *argv[]) {
    double a[] = {1, 2, 3};

    for(int i = 0; i < 3; i++) {
        printf("%p\n", &a[i]);
    }

    return 0;
}