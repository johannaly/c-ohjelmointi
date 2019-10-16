/*
 * Harjoittelua funktioilla:
 * Create these functions:

1. Calculates the sum of 2 integers and prints out the result.
2. Returns the sum of 2 integers.
3. Returns the average of 2 integers
4. Returns the average of 4 floating point values.
 -----
6. Returns the factorial.
7. Returns the biggest of 2 integers.
8. Returns the biggest of 3 integers.
10. Converts inches to centimeters.
11. Returns the BMI.
12. Function returns the biggest of 5 integers.
15. Program with functions calculates amount of combinations.
16. Function prints out a lotto row.
17. Program with functions calculates the standard deviation.
18. Functions calculate:
- sum of an array
- min and max
19. Function searches for a value from an array.
20. Returns the sum of an array.
21. Function multiplies every value in an array by 2.
21.1. Function converts the text to morse code characters.
21.2. Function checks if the post code includes exactly 5 numbers.

131019 Johanna Lyytinen
 */

#include <stdio.h>

/* Funktioiden esittely */
void printSum(int a, int b);
int sum(int a, int b);
float average(int a, int b);
float averageFour(float a, float b, float c, float d);

int main() {
    int firstDigit = 0;
    int secondDigit = 0;
    printf("Syötä ensimmäinen arvo: \n");
    scanf("%d", &firstDigit);
    printf("Syötä toinen arvo: \n");
    scanf("%d", &secondDigit);

    printSum(firstDigit, secondDigit);
    printf("Summa on %d \n", sum(firstDigit, secondDigit));
    printf("Lukujen keskiarvo on %.2f. \n", average(firstDigit, secondDigit));

    float a, b, c, d;
    printf("Syötä ensimmäinen arvo: \n");
    scanf("%f", &a);
    printf("Syötä toinen arvo: \n");
    scanf("%f", &b);
    printf("Syötä kolmas arvo: \n");
    scanf("%f", &c);
    printf("Syötä neljäs arvo: \n");
    scanf("%f", &d);
    printf("Näiden neljän luvun keskiarvo on %.2f. \n", averageFour(a, b, c, d));
    return 0;
}

/* FUNKTIOT */
/* Calculates the sum of 2 integers and prints out the result. */
void printSum(int a, int b) {
    printf("Summa on %d. \n", a + b);
}

/* Returns the sum of 2 integers. */
int sum (int a, int b) {
    return a + b;
}

/* Returns the average of 2 integers */
float average (int a, int b) {
    return (float) (a + b) / 2;
}

/* Returns the average of 4 floating point values. */
float averageFour(float a, float b, float c, float d) {
    return (a + b + c + d) / 4;
}