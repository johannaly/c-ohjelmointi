/*
 * Ohjelma laskee summan viidellä jaollisilla luvuilla välillä 5-100. Tämä tehdään kolmeen eri kertaan käyttäen for,
 * while ja do-while-loopia.
 * 101019 Johanna Lyytinen
 */

#include <stdio.h>

int main() {

    /* lasku käyttäen for-loopia */
    int summa = 0;
    for (int i = 5; i <= 100; i += 5) {
        summa = summa + i;
    }
    printf("Summa on %d. \n", summa);

    /* lasku käyttäen while-loopia */
    summa = 0;
    int i = 5;
    while (i <= 100) {
        summa = summa + i;
        i += 5;
    }
    printf("Summa on %d. \n", summa);

    /* lasku käyttäen do-while-loopia */
    summa = 0;
    i = 5;
    do {
        summa = summa + i;
        i += 5;
    } while (i <= 100);
    printf("Summa on %d. \n", summa);
    return 0;
}