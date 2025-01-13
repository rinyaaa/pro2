#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_prime(int number) {
    for(int i = 2; i * i <= number; i++) {
        if(number % i == 0)
            return false;
    }
    return true;
}
int main(int argc, const char *argv[]) {

    FILE *fp;
    fp = fopen("src/6/pro8/prime.txt", "w");
    if(fp == NULL) {
        printf("Cannot open the file.\n");
        exit(0);
    }
    for(int i = 1; i <= 100; i++) {
        if(is_prime(i)) {
            fprintf(fp, "%d\n", i);
        }
    }

    fclose(fp);
    return 0;
}
