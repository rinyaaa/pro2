#include <stdio.h>
#include <string.h>

void my_strcpy(char *a, char *b) {
    int i = 0;
    while(*a != '\0') {
        *b = *a;
        a++;
        b++;
    }
    *b = '\0'; // b の末尾にヌル終端を追加
}
int main(int argc, const char *argv[]) {
    char a[128] = "abc";
    char b[128];

    my_strcpy(a, b);

    printf("%s", b);
    printf("\n");

    return 0;
}