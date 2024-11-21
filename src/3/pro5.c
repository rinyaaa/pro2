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

int main() {
    int x = 10;
    int y = 5;

    sort(&x, &y);

    printf("%d,%d", x, y);

    return 0;
}