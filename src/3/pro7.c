#include <stdio.h>

int main() {
    int a = 0, *px;

    px = &a;

    printf("%p,%p", &a, px);
}