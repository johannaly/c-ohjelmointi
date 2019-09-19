/**
 *Käyttäjä syöttää luvun ja ohjelma kertoo onko luku isompi kuin sata.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    int digit = 0;
    printf("Syötä jokin luku: \n");
    scanf("%d", &digit);
    if (digit > 100) {
        printf("Luku on isompi kuin 100.");
    }
    else {
        printf("Luku on pienempi kuin 100.");
    }
    return 0;
}