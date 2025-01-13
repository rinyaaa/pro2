#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[]) {
    char a[128] = "abc";
    char b[128];

    strcpy(b, a);

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    return 0;
}