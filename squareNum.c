#include <stdio.h>
#include <stdlib.h>

int squareNum (int * ptr);

int main () {
    int num = 3;
    int * pNum = &num;

    printf("%d\n", squareNum(pNum));
}

int squareNum (int * ptr) {
    return (*ptr)*(*ptr);
}