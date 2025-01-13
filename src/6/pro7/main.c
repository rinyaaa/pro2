#include <stdio.h>
#include <stdlib.h>

int get_last_number(const char *filename) {
    FILE *fp;

    fp = fopen(filename, "r");
    if(fp == NULL) {
        exit(0);
    }
    int last_number;

    while(fscanf(fp, "%d", &last_number) == 1) {
    }
    fclose(fp);

    return last_number;
}

int main(int argc, const char *argv[]) {
    const char *filename = "src/6/pro7/number.txt";
    int last_number = get_last_number(filename);

    FILE *fp;
    fp = fopen("src/6/pro6/number.txt", "a");
    if(fp == NULL) {
        printf("Cannot open the file.\n");
        exit(0);
    }

    for(int i = last_number + 1; i < 200; i++) {
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);
    return 0;
}
