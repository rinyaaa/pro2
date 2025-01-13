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

void bubble_str_ptr(char **list, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1; j++) {
            sort_str_ptr(&list[j], &list[j + 1]);
        }
    }
}
int main(int argc, const char *argv[]) {

    char *list[] = {"hoge", "abc", "xy", "fugagaga"};

    int size = sizeof(list) / sizeof(list[0]);

    bubble_str_ptr(list, size);

    printf("\nAfter sorting by length:\n");
    for(int i = 0; i < size; i++) {
        printf("%s\n", list[i]);
    }

    return 0;
}