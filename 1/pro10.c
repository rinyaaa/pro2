#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[]) {
    srandom((int)time(0));
    int num = (int)random() % 3 + 3;
    printf("%d\n", num);
}