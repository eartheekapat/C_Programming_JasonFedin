// author : eartheekapat
// purpose : just implement 3 functions 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// find the greatest common divisor of two non-negative interger
int gcd (int num_1, int num_2);
// // calculate the absolute value of a number
float absoluteValue(float num);
// /* compute the square root of a number
//     if negative number is passed return -1.0
//     should use 'absoluteValue' (abs) above
// */
// double sqr(double num);

int main () {
    int result = gcd(150, 35);
    printf("%d\n", result);

    result = gcd(1026, 405);
    printf("%d\n", result);

    result = gcd(83, 240);
    printf("%d\n", result);
}

// double s(double num) {
//     // check if the argument is a negative nubmer
//     if (num < 0) {
//         double ans = -1.0;
//         return ans;
//     } else {
//         double ans = sqrt(num);
//         return ans;
//     }
// }

float absoluteValue(float num) {
    // check wheter the number is positive or negative
    if (num < 0) {
        // if negative, multiply by -1
        return num * -1;
    } else { // for positive float just return
        return num;
    }
}

int gcd (int num_1, int num_2) {
    // check whether the two parameters are non-negative number
    if (num_1 < 0 || num_2 < 0) {
        printf ("invalid parameters");
        return 0;
    } else { // the two parameters are non-negative values (valid parameters)
        int max = 1;
        if (num_1 < num_2) {
           for (int i = 1; i <= num_1; i++) {
               if (num_1 % i == 0 && num_2 % i == 0) {
                    max = i;                   
               }
           } 
           return max;
        } else if (num_2 < num_1) {
            for (int i = 1; i <= num_2; i++) {
                if (num_1 % i == 0 && num_2 % i == 0) {
                    max = i;
                }
            }
            return max;
        }
    }
}