#include <stdio.h>

void bad_swap(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void good_swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(int argc, const char *argv[]) {
    int a = 10, b = 5;

    bad_swap(a, b);
    printf("bat_swap%d %d\n", a, b);

    good_swap(&a, &b);
    printf("good_swap%d,%d", a, b);

    return 0;
}