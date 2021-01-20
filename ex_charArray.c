// author : eartheekapat

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STR_1 "exercise"
#define STR_2 "exercise"
#define STR_3 "byJason"

int strLength (char *string);
void strConcate (char result[], const char str1[], const char str2[]);
bool stringEqual (const char str1[], const char str2[]);

int main () {
    // printf("%d\n", strLength(STR_1));
    // printf("%d\n", strLength(STR_2));
    // printf("%d\n", strLength(STR_3));
    // char result[50];

    // strConcate (result, STR_1, STR_2);

    // printf ("%s\n", result);
    printf("%d\n",  stringEqual (STR_1, STR_2));
    
}

bool stringEqual (const char str1[], const char str2[]) {
    // firstly check if the two string has equal length
    if (strLength(str1) != strLength(str2)) {
        return false;
    } else {
        // here the two strings have the same length so compare each char
        for (int i = 0; str1[i] != '\0'; i++) {
            if (str1[i] != str2[i]) {
                return false;
            }
        }
        return true;
    }
}

void strConcate (char result[], const char str1[], const char str2[]) {
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }
    int res_i = i;
    for (i = 0; str2[i] != '\0'; i++) {
        result[res_i] = str2[i];
        res_i++;
    }
    result[res_i] = '\0';
}

int strLength (char *string) {
    int i = 0;
    int count = 0;
    while (string[i] != '\0') {
        count++;
        i++;
    } 
    return count;
}