#include <stdio.h>
#include <string.h>

void swap_str_ptr(char **a, char **b) {
    char *tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_str_ptr(char **a, char **b) {
    if(strlen(*a) > strlen(*b)) {
        swap_str_ptr(a, b);
    }
}

int main(int argc, const char *argv[]) {
    char *a = "abcde";
    char *b = "xyz";

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    sort_str_ptr(&a, &b);
    printf("\n");

    printf("a = %s\n", a);
    printf("b = %s\n", b);
    return 0;
}