/**
 * Ohjelma laskee painoindeksin kun käyttäjä on syöttänyt pituuden ja painon.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    float height = 0;
    float weight = 0;
    printf("Ohjelma laskee BMI:n.\n");
    printf("Syötä painosi (kg): \n");
    scanf("%f", &weight);

    printf("Syötä pituutesi (m): \n");
    scanf("%f", &height);

    float bmi = weight / (height * height);
    printf("Painoindeksisi on %.2f.", bmi);
    return 0;
}