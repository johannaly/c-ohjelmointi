/*
 * Program with functions calculates the standard deviation.
 *
 * 031119 Johanna Lyytinen
 *
 */


#include <stdio.h>
#include <math.h>

float countStandardDeviation(float table[], int sizeOfTable);

int main() {
    float numbers[10] = {1, 2.3, 5, 6, 7.8, 9, 10, 0, 6, 10};
    printf("Taulukon keskihajonta on: %f \n", countStandardDeviation(numbers, sizeof(numbers)/ sizeof(numbers[0])));
    return 0;
}

float countStandardDeviation(float table[], int sizeOfTable) {
    float sum = 0;
    for (int i = 0; i < sizeOfTable; i++) {
        sum = sum + table[i];
    }
    float average = sum / sizeOfTable;
    float sd = 0;
    for (int i = 0; i < sizeOfTable; i++) {
        sd = sd + pow ((table[i] - average), 2);
    }
    return sqrt(sd / sizeOfTable);
}