/**
 * Ohjelma muuntaa dollarit euroiksi, käyttäjä syöttää dollareiden määrän.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

const float rate = 0.90;
int main() {
    float dollars = 0;
    float euros = 0;

    printf("Syötä dollarit: \n");
    scanf("%f", &dollars );
    euros = dollars * rate;
    printf("%.4f dollaria on %.4f euroa.", dollars, euros);
    return 0;
}