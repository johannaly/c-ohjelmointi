/**
 * Käyttäjä saa syöttää kaksi numeroa. Ohjelma kertoo, onko toinen luku pienempi, suurempi vai yhtäsuuri kuin ensimmäinen.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    int first_digit = 0;
    int second_digit = 0;
    printf("Syötä ensimmäinen luku: \n");
    scanf("%d", &first_digit);
    printf("Syötä toinen luku: \n");
    scanf("%d", &second_digit);
    if (first_digit < second_digit) {
        printf("up");
    }
    else if (first_digit > second_digit) {
        printf("down");
    }
    else {
        printf("equal");
    }
    return 0;
}