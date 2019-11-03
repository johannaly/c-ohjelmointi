/*
 *  Program with functions calculates the amount of combinations in a student group.
 *
 *  301019 Johanna Lyytinen
 *  031119 jatkettu tehtävää
 */

#include <stdio.h>

int factorial(int f);
int combinations(int n, int k);

int main() {
    int amountOfStudents;
    int sizeOfGroup;
    printf("Syötä oppilaiden määrä: \n");
    scanf("%d", &amountOfStudents);
    printf("Minkä kokoisia ryhmiä haluat tehdä? \n");
    scanf("%d", &sizeOfGroup);
    printf("Mahdollisten erilaisten ryhmien määrä on: %d.", combinations(amountOfStudents, sizeOfGroup));
    return 0;
}

/*  Returns the factorial. */
int factorial(int f) {
    int factorialResult = f;
    int multiplier = f-1;
    for (int i = 1; i < f; i++) {
        factorialResult = factorialResult * multiplier;
        multiplier--;
    }
    return factorialResult;
}

/* counts the amount of combinations */
int combinations(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}