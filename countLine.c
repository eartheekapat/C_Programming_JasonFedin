#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE * fp = NULL;
    fpos_t postion;

    fp = fopen("file.txt", "w+");
    fgetpos(fp, &postion);
    
    fputs("This is a random string\n", fp);
    fputs("I'm very happy to become a better person\n", fp);
    fputs("for my beloved family and friends", fp);

    int count = 0;
    char ch;

    fsetpos(fp, &postion);

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    printf("%d\n", count);
}