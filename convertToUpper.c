#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    FILE * fp = NULL;
    fpos_t postion;
    FILE * fp2 = NULL;

    fp = fopen("file.txt", "w+");
    if (fp == NULL) {
        exit(-1);
    }
    fgetpos(fp, &postion);
    fp2 = fopen("temp.txt", "w+");
    if (fp2 == NULL) {
        exit(-1);
    }
    
    fputs("This is a random string\n", fp);
    fputs("I'm very happy to become a better person\n", fp);
    fputs("for my beloved family and friends", fp);

    int count = 0;
    char ch;

    fsetpos(fp, &postion);

    while ((ch = fgetc(fp)) != EOF) {
        if (islower(ch)) {
            fputc(ch-32, fp2);
        } else {
            fputc(ch, fp2);
        }
    }

    fclose(fp);
    fclose(fp2);

    rename("temp.txt", "file.txt");

    fp = fopen("file.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, stdout);
    }
    printf("\n");

    return 0;
}