#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {

    char moji[100];
    printf("小文字で入力してください\n");
    scanf("%s", moji);

    for(int i = 0; moji[i] != '\0'; i++) {
        moji[i] = toupper(moji[i]);
    }

    printf("%s\n", moji);
    return 0;
}