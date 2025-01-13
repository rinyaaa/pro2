#include <math.h>
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int x1 = 100;
    int y1 = 10;
    int x2 = 200;
    int y2 = 50;

    int x = x2 - x1;
    int y = y2 - y1;

    printf("%f", sqrt((x * x) + (y * y)));

    return 0;
}