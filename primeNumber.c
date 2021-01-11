// author : eartheekapat
// purpose : find all the prime numbers from 3 - 100

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static bool IsPrime(int number);


int main () {
    int primeNum[100] = { [0] = 2, [1] = 3};
    int arrayIndex = 2;
    for (int i = 5; i <= 100; i++) {
        if (IsPrime(i)) {
            // if prime number assign to array
            primeNum[arrayIndex] = i;
            arrayIndex++;
        }
    }

    for (int j = 0; j < 100; j++) {
        if (primeNum[j] != 0) {
            printf ("%d ", primeNum[j]);
        }
    }
}

static bool IsPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}
