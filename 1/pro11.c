#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[]) {
    srandom(time(0));
    int max = 0, min = 0;

    if(max <= min) {
        printf("max?");
        scanf("%d", &max);
        printf("min?");
    }

    scanf("%d", &min);

    int num = random() % min + max - 2;
    printf("%d\n", num);
}