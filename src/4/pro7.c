#include <stdio.h>

void bai(int *a, int size) {
    for(int i = 0; i < size / sizeof(int); i++) {
        *(a + i) = *(a + i) * 10;
    }
}

int main(int argc, const char *argv[]) {

    int a[5] = {10, 20, 30, 40, 50};
    bai(a, sizeof(a));
    for(int i = 0; i < sizeof(a) / sizeof(int); i++) {
        printf("%d\n", a[i]);
    }

    int b[4] = {3, 4, 5, 6};
    bai(b, sizeof(b));
    for(int i = 0; i < sizeof(b) / sizeof(int); i++) {
        printf("%d\n", b[i]);
    }
    return 0;
}