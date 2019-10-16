/*
 * Fill an array with 10 values.
 * Print the array
 * Find min and max
 * Find a specific value
 *
 *111019 Johanna Lyytinen
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int arrayNumbers[10] = {2, 6, 7, 81, 90, 100, 1001, 2, 1, 99};
    int minValue = arrayNumbers[0];
    int maxValue = arrayNumbers[0];

    for (int i = 0; i <= 9; i++) {
        printf("%d \n", arrayNumbers[i]);
            if (arrayNumbers[i] < minValue) {
                minValue = arrayNumbers[i];
            }
            else if (arrayNumbers[i] > maxValue) {
                maxValue = arrayNumbers[i];
            }
        }

    printf("Pienin arvo on %d \n", minValue);
    printf("Suurin arvo on %d \n", maxValue);

    int wantedValue = 0;
    printf("Minkä arvon haluat löytää? \n");
    scanf("%d", &wantedValue);

    bool a = false;
    for (int i = 0; i <= 9; i++) {
        if (arrayNumbers[i] == wantedValue) {
            printf("Arvo %d löytyy taulukon kohdasta %d. \n", wantedValue, i);
            a = true;
        }
    }
    if (a == false) {
        printf("Arvoa ei löydy taulukosta. \n");
    }
    return 0;
}