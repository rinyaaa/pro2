#include <stdio.h>

int main(int argc, const char *argv[]) {
    int height, weight;
    float bmi;

    printf("height(cm)? ");
    scanf("%d", &height);

    printf("weight(kg)? ");
    scanf("%d", &weight);

    float height_m = height * 0.01;

    bmi = weight / (height_m * height_m);

    if(bmi <= 18.5) {
        printf("やせ\n");
    } else if(bmi >= 18.5 && bmi < 25) {
        printf("普通\n");
    } else if(bmi >= 25 && bmi < 30) {
        printf("肥満\n");
    } else {
        printf("高度肥満\n");
    }

    return 0;
}
