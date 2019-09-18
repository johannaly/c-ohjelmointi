/**
 * Ohjelma laksee resistanssin, käyttäjä antaa jännitteen ja sähkövirran.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {

    float voltage = 0;
    float current = 0;
    float resistance = 0;

    printf("Syötä jännite voltteina: \n");
    scanf("%f", &voltage);

    printf("Syötä sähkövirta ampeereina: \n");
    scanf("%f", &current);

    resistance = voltage/current;
    printf("Resistanssi on %f \n", resistance);
    return 0;
}