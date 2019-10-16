/*
 * Ohjelma laskee 2-40 välillä olevien parillisten lukujen summan käyttämällä for, while ja do-while loopeja.
 * 101019 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    /* summa laskettu käyttäen for-loopia */
    int summa = 0;
    for (int i = 2; i <= 40; i += 2) {
        summa = summa + i;
    }
    printf("Välillä 2-40 parillisten lukujen summa on %d. \n", summa);

    /* summa laskettu käyttäen while-loopia */
    summa = 0;
    int i = 2;
    while (i <= 40) {
        summa = summa + i;
        i += 2;
    }
    printf("Välillä 2-40 parillisten lukujen summa on %d. \n", summa);

    /* summa laskettu käyttäen do-while-loopia */
    summa = 0;
    i = 2;
    do {
        summa = summa + i;
        i += 2;
    } while (i <= 40);
    printf("Välillä 2-40 parillisten lukujen summa on %d.", summa);
    return 0;
}