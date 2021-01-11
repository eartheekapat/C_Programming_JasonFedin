// author : eartheekapat
// purpose : use a two-dimensional array in a weather program

#include <stdio.h>
#include <stdlib.h>

#define MONTHPERYEAR 12

float yearlyAvg(int whichYear, float rainfallArray[5][12]);

int main () {
    float rainfallAmount[5][12] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24},
        {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22}
    };

    int year = 2010;
    int numYear = 5;

    printf ("YEAR   RAINFALL (inches)\n");
    for (int count = 0; count < numYear; count++) {
        float yearAvg = yearlyAvg(count, rainfallAmount);
        printf ("%d\t%f\n", year, yearAvg);
        year++;
    }
}

float yearlyAvg(int whichYear, float rainfallArray[5][12]) {
    float sum = 0;
    for (int i = 0; i <= MONTHPERYEAR; i++) {
        sum += rainfallArray[whichYear][i];
    }
    return sum / MONTHPERYEAR;
}