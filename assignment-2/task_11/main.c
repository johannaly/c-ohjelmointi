/**
 * Käytäjä syöttää viikonpäivän numeron ja ohjelma kertoo viikonpäivän nimen.
 * 190919 Johanna Lyytinen
 */
#include <stdio.h>

int main() {
    int weekday_number = 0;
    printf("Syötä viikonpäivän numero (1-7): \n");
    scanf("%d", &weekday_number);
    switch (weekday_number) {
        case 1:
            printf("maanantai");
            break;
        case 2:
            printf("tiistai");
            break;
        case 3:
            printf("keskiviikko");
            break;
        case 4:
            printf("torstai");
            break;
        case 5:
            printf("perjantai");
            break;
        case 6:
            printf("lauantai");
            break;
        case 7:
            printf("sunnuntai");
            break;
        default:
            printf("tarkista syöttämäsi arvo");
    }
    return 0;
}