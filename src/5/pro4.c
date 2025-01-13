#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char *str = "abcd";

    for(int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}