#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *max, int *min) {
    if(max > min) {
        swap(max, min);
    }
}

void sort3(int *a, int *b, int *c) {
    sort(a, b);
    sort(a, c);
    sort(b, c);
}

int main() {
    int x = 10;
    int y = 5;
    int z = 2;

    sort3(&x, &y, &z);

    printf("%d,%d,%d", x, y, z);

    return 0;
}