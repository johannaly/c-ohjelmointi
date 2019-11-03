/* Funktioiden harjoittelua:
 *
 *  18. Functions calculate:
 *   - sum of an array
 *   - min and max
 *  19. Function searches for a value from an array.
 *  20. Returns the sum of an array.
 *  21. Function multiplies every value in an array by 2.
 *
 * 231019 Johanna Lyytinen
 * 261019 Jatkettu harjoitusta
 *
 */

#include <stdio.h>
#include <stdbool.h>

void sumBigSmallOfTable(int table[], int tableSize);
bool contains (int table[], int tablesize, int value);
int sum (int table[], int tableSize);
void multiplier (int table[], int tableSize);

int main() {
    int numbers[8] = {3, 6, 7, 90, 0, 2, 786, 8};
    int sizeofTable= sizeof(numbers) / sizeof(numbers[0]);
    sumBigSmallOfTable(numbers, sizeofTable);

    int value;
    printf("Mitä lukua haluat etsiä taulukosta? : \n");
    scanf("%d", &value);
    if (contains(numbers, sizeofTable, value)) {
        printf("Etsimäsi arvo löytyy taulukosta. \n");
    }
    else {
        printf("Etsimääsi arvoa ei löydy taulukosta. \n");
    }

    printf("Taulukon arvojen yhteenlaskettu summa on %d. \n",sum(numbers, sizeofTable));

    multiplier(numbers, sizeofTable);
    printf("Taulukossa on nyt arvot: \n");
    for (int i = 0; i < sizeofTable; i++) {
        printf("%d \n", numbers[i]);
    }
    return 0;
}


/* FUNKTIOT */
/* Function calculate: sum of an array, min and max */
void sumBigSmallOfTable (int table[], int tableSize) {
    int sum = 0;
    int max = table[0];
    int min = table[0];
    for (int i = 0; i < tableSize; i++) {
        sum = sum + table[i];
        if (table[i] < min) {
            min = table[i];
        }
        else if (table [i] > max) {
            max = table [i];
        }
    }
    printf("Taulukon lukujen summa on %d. \n", sum);
    printf("Taulukon pieni luku on %d ja suurin luku on %d. \n", min, max);
}

/* Function searches for a value from an array. */
bool contains (int table[], int tablesize, int value) {
    for (int i = 0; i < tablesize; i++) {
        if (table[i] == value) {
            return true;
        }
    }
    return false;
}

/* Returns the sum of an array */
int sum (int table[], int tableSize) {
    int sum = 0;
    for (int i = 0; i < tableSize; i++) {
        sum = sum + table[i];
    }
    return sum;
}

/* Function multiplies every value in an array by 2. */
void multiplier (int table[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        table[i] = table[i] * 2;
    }
}