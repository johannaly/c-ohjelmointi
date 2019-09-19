/**
 * Ohjelma ratkaisee käyttäjän syöttämän toisen asteen yhtälön.
 * 190919 Johanna Lyytinen
 */

#include <stdio.h>
#include <math.h>

/* määritellään raja-arvo liukulukujen yhtäsuuruuden tarkistamiseen. https://bitbashing.io/comparing-floats.html*/
const float epsilon = 1e-9;

int main() {
    float a = 0;
    float b = 0;
    float c = 0;
    printf("Anna yhtälön ax^2 + bx + c = 0 kertoimet. \n");
    printf("Syötä a: ");
    scanf("%f", &a);
    printf("Syötä b: ");
    scanf("%f", &b);
    printf("Syötä c: ");
    scanf("%f", &c);

    /* lasketaan diskdriminantti D. */
    float discriminant = powf(b, 2) - 4 * a * c;

    /* Jos D on pienempi kuin nolla */
    if (discriminant < 0) {
        printf("Yhtälöllä ei ole reaalijuuria.");
    }

    /* jos D on nolla */
    else if (fabsf(discriminant - 0) < epsilon) {
        printf("Yhtälöllä on yksi ratkaisu. \n");
        printf("x = %f", -b / (2 * a));
    }

    else {
        printf("Yhtälöllä on kaksi ratkaisua. \n");
        printf("x = %f", (-b + sqrtf(discriminant)) / (2 * a));
        printf(" tai x = %f", (-b - sqrtf(discriminant)) / (2 * a));
    }
    return 0;
}