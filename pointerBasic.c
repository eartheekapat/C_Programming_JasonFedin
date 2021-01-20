#include <stdio.h>
#include <stdlib.h>

int main () {
    int num = 0;
    int *pointer = &num;

    printf("now the pointer pointed to %p with value %d\n", pointer, *pointer);
    // then assign value to the pointer
    // which means we change the value stored in num
    *pointer = 10;

    printf("now the pointer pointed to %p with value %d\n", pointer, *pointer);
    
    return 0;
}