#include <stdio.h>

void bubble(int *a, int size) {
    int tmp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(int argc, const char *argv[]) {
    int a[4] = {3, 2, 10, 8};

    bubble(a, sizeof(a) / sizeof(int));

    for(int i = 0; i < sizeof(a) / sizeof(int); i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}