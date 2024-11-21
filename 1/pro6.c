#include <stdio.h>

#define NUM 100

int main(int argc, const char *argv[]) {
    for(int i = 0; i < NUM; i++) {
        printf("hoge");
        if(i % 2 == 0) {
            printf("foo");
        } else if(i % 3 == 0) {
            printf("bar");
        }
        printf("\n");
    }

    return 0;
}