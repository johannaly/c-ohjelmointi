/**
 * Ohjelma kertoo montako päivää kuukaudessa on. Käyttäjä syöttää kuukauden numeron.
 * 190919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    int month_number = 0;
    printf("Syötä kuukauden numero: \n");
    scanf("%d", &month_number);
    switch (month_number) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 päivää");
            break;
        case 2:
            printf("29 tai 28 päivää");
            break;
        default:
            printf("30 päivää");
    }
    return 0;
}