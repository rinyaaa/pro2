#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char str1[128] = "abc";
    char str2[] = "cde";
    char *str = "fgh";

    printf("1: %lu\n", strlen(str1));
    printf("2: %lu\n", strlen(str2));
    printf("*: %lu\n", strlen(str));

    printf("1: %lu\n", sizeof(str1));
    printf("2: %lu\n", sizeof(str2));
    printf("*: %lu\n", sizeof(str));
    return 0;
}