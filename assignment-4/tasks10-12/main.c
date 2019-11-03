/*
 * Harjoittelua funktioilla
 * 10. Converts inches to centimeters.
 * 11. Returns the BMI.
 * 12. Function returns the biggest of 5 integers.
 *
 * 221019 Johanna Lyytinen
 */

#include <stdio.h>
#include <math.h>

float inchToCm (float inch);
float countBmi (float height, float weight);
int findBiggest (int numbers[]);

int main() {
    float inch = 0;
    printf("Muutan tuumat senttimetreiksi. \n");
    printf("Syötä tuumat: \n");
    scanf("%f", &inch);
    printf("%.2f tuumaa on %.2f senttimetriä. \n", inch, inchToCm(inch));

    float height = 0;
    float weight = 0;
    printf("Lasken paino-indeksisi. \n");
    printf("Syötä painosi (kilogrammoina) : \n");
    scanf("%f", &weight);
    printf("Syötä pituutesi (metreinä) : \n");
    scanf("%f", &height);
    printf("Painoindeksisi on : %.2f. \n", countBmi(height, weight));

    int numbers[5];
    printf("Syötä viisi lukua, niin kerron mikä niistä on isoin. \n");
    for (int i = 0; i <= 4; i++) {
        printf("Syötä luku: \n");
        scanf("%d", &numbers[i]);
    }
    printf("Suurin luvuista on %d. \n", findBiggest(numbers));

    return 0;
}

/* FUNKTIOT */

/* Converts inches to centimeters */
float inchToCm (float inch) {
    return inch * 2.54;
}

/* Returns the BMI */
float countBmi (float height, float weight) {
    return weight / (pow(height, 2));
}

/* Function returns the biggest of 5 integers */
int findBiggest (int numbers[]) {
    int biggest = numbers[0];
    for (int i = 0; i <= 4; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }
    return biggest;
}