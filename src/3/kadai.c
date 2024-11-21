#include <math.h>
#include <stdio.h>

void getAvgSD(int x, int y, double *avg, double *sd) {
    *avg = (x + y) / 2.0;
    double a = x - *avg;
    double b = y - *avg;
    *sd = sqrt((pow(a, 2) + pow(b, 2)) / 2.0);
}

int main() {
    int a, b;
    double avg, sd;

    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);

    getAvgSD(a, b, &avg, &sd);

    printf("avg: %f, sd: %f\n", avg, sd);

    return 0;
}
