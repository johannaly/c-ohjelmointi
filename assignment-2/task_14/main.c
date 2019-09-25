/**
 *  Käyttäjä syöttää kolmion sivut. Ohjelma kertoo millaisesta kolmiosta on kysymys ja laskee sen pinta-alan.
 *  190919 Johanna Lyytinen
 */

#include <stdio.h>
#include <math.h>

int main() {
    float side_a = 0;
    float side_b = 0;
    float side_c = 0;

    printf("Syötä sivun a pituus (cm): \n");
    scanf("%f", &side_a);
    printf("Syötä sivun b pituus (cm): \n");
    scanf("%f", &side_b);
    printf("Syötä sivun c pituus (cm): \n");
    scanf("%f", &side_c);

    /* lasketaan apumuuttujat s1 ja s2 Heronin kaavaa varten */
    float s1 = powf(side_a, 2) + powf(side_b, 2) + powf(side_c, 2);
    float s2 = powf(side_a, 4) + powf(side_b, 4) + powf(side_c, 4);

    /* tarkistetaan onko kyseessä kolmio */
    if ((2 * s2) > powf(s1,2)) {
        printf("Kyseessä ei ole kolmio.");
    }

    else {
        /* testataan ovatko kaikki sivut yhtä pitkiä */
        if (side_a == side_b && side_a == side_c) {
            printf("Kolmio on tasasivuinen.");
        }

        /* testataan onko kolmion kahden sivun välinen kulma suorakulma */
        else if ((powf(side_a,2) + powf(side_b,2) == powf(side_c,2)) ||
                 (powf(side_a,2) + powf(side_c,2) == powf(side_b,2)) ||
                 (powf(side_c,2) + powf(side_b,2) == powf(side_a,2))) {
            printf("Kolmio on suorakulmainen.");
        }

        /* testataan ovatko kolmion kaksi sivua yhtä pitkät */
        else if ((side_a == side_b) ||
                 (side_a == side_c) ||
                 (side_b == side_c)) {
            printf("Kolmio on tasakylkinen.");
        }

        /* jos kolmio ei ole säännönmukainen */
        else {
            printf("Kolmio ei ole säännönmukainen.");
        }

        /* lasketaan kolmion pinta-ala Heronin kaavan mukaan käyttämällä apumuuttujia s1 ja s2 */
        float area = 0.25 * sqrtf(powf(s1,2) - (2 * s2));
        printf(" Kolmion pinta-ala on %.2f cm^2.", area);
    }
    return 0;
}