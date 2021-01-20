#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_LENGTH 50

char* reverseString (char* str);
void sortString (char strbuff[][MAX_LENGTH]);

int main () {
    int n;
    printf("Input number of strings :");
    scanf("%d", &n);
    printf("input string %d :\n", n);
    char strbuff[n][MAX_LENGTH], temp[MAX_LENGTH];
    for (int count = 0; count < n; count++) {
        scanf("%s", strbuff[count]);
    }
    printf("\n");
    printf("Expected Output:\n");
    printf("\n");
    printf("The strings appears after sorting:\n");
    for (int i=0; i < n; i++) {
        for (int j=i+1; j < n; j++){
            if(strcmp(strbuff[i], strbuff[j])>0){
                strcpy(temp, strbuff[i]);
                strcpy(strbuff[i], strbuff[j]);
                strcpy(strbuff[j],temp);
            }
        }
    }
    for (int count = 0; count < n; count++) {
        printf ("%s\n", strbuff[count]);
    }
}

char* reverseString (char* str) {
    int len = strlen (str);
    char* res = malloc(len);
    for (int i = len-1,res_i = 0; i >= 0; i--) {
        res[res_i] = str[i];
        res_i++;
    }
    return res;
}