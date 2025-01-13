#include <stdio.h>
#include <stdlib.h>
#define MAX 256
int main(int argc, const char *argv[]) {

    FILE *fp;

    fp = fopen("meibo.txt", "r");
    if(fp == NULL) {
        printf("Cannot open the file.");
        exit(0);
    }
    char line[MAX];

    while(fgets(line, MAX, fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}