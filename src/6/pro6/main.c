#include <stdio.h>
#include <stdlib.h>
#define MAX 256

int main(int argc, const char *argv[]) {
    FILE *fp;

    fp = fopen("src/6/pro6/number.txt", "w");
    if(fp == NULL) {
        printf("Cannot open the file.");
        exit(1);
    }

    for(int i = 0; i < 100; i++) {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);

    return 0;
}
