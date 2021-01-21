#include <stdio.h>
#include <stdlib.h>

int main () {
    int wordLen;
    printf("Please input the limit of the string : ");
    scanf("%d", &wordLen);

    char * ptr = malloc(wordLen * sizeof(char));

    printf("Please input a text string");
    scanf("%s", ptr);

    printf("the input text string is \"%s\"\n", ptr);

    free(ptr);

    return 0;
    
}
