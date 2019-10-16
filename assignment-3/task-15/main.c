/*
 * Ohjelma laskee 1-5 lukujen yhteenlasketun summan kolmeen eri kertaan, käyttäen for, while ja do-while- loopeja.
 * 101019 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    int summa = 0;
    for (int i = 1; i <= 5; i++) {
        summa = summa + i;
    }
    printf("tulos on %d \n", summa);

    int summa2 = 0;
    int i = 1;
    while (i <=5) {
        summa2 = summa2 + i;
        i++;
    }
    printf("tulos on %d \n", summa2);

    int summa3 = 0;
    int j = 1;
    do {
        summa3 = summa3 + j;
        j++;
    } while (j <=5);
    printf("tulos on %d", summa3);
    return 0;
}