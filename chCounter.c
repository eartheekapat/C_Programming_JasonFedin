#include <stdio.h>
#include <stdlib.h>

int calStrLength (const char* ptr);

int main () {
    const char ptr[] = "aha";
    printf ("%d\n", calStrLength(ptr));
}

int calStrLength (const char* ptr) {
    int count = 0;
    for (int i = 0; ptr[i] != '\0'; i++) {
        count++;
    }
    return count;
}
