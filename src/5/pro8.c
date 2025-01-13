#include <stdio.h>

void swap_str_ptr(char **a, char **b) {
    char *tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, const char *argv[]) {
    char *a = "AB";
    char *b = "XY";

    printf("before:a=%s\nb=%s\n", a, b);

    swap_str_ptr(&a, &b);

    printf("after:a=%s\nb=%s\n", a, b);

    return 0;
}