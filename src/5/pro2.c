#include <stdio.h>

int my_strlen(char *str1) {
    int i = 0;
    while(str1[i] != '\0') {
        i++;
    }
    return i;
}

int main(int argc, const char *argv[]) {
    char str1[128] = "abc";
    int length;

    length = my_strlen(str1);

    printf("%d\n", length);
    return 0;
}
