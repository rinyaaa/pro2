#include <stdio.h>
#include <string.h>

void swap_str(char *a, char *b) {
    char tmp[128];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}
int main(int argc, const char *argv[]) {

    char a[128] = "abcde";
    char b[128] = "xyz";

    printf("before:a=%s\nb=%s\n", a, b);

    swap_str(a, b);

    printf("after:a=%s\nb=%s\n", a, b);

    return 0;
}