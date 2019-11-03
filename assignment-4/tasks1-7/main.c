/*
 * Harjoittelua funktioilla:
 * Create these functions:

1. Calculates the sum of 2 integers and prints out the result.
2. Returns the sum of 2 integers.
3. Returns the average of 2 integers
4. Returns the average of 4 floating point values.
5. Returns the factorial.
6. Returns the biggest of 2 integers.
7. Returns the biggest of 3 integers.


131019 tehty 1-4 funktiot Johanna Lyytinen
 221019 tehty lisää funktioita 5-7 Johanna Lyytinen
 */

#include <stdio.h>

/* Funktioiden esittely */
void printSum(int a, int b);
int sum(int a, int b);
float average(int a, int b);
float averageFour(float a, float b, float c, float d);
int factorial(int f);
int big(int a, int b);
int large (int t, int l, int k);

int main() {
    int firstDigit = 0;
    int secondDigit = 0;
    printf("Syötä kaksi arvoa, niin lasken niiden summan ja keskiarvon. \n");
    printf("Syötä ensimmäinen arvo: \n");
    scanf("%d", &firstDigit);
    printf("Syötä toinen arvo: \n");
    scanf("%d", &secondDigit);

    printSum(firstDigit, secondDigit);
    printf("Summa on %d \n", sum(firstDigit, secondDigit));
    printf("Lukujen keskiarvo on %.2f. \n", average(firstDigit, secondDigit));

    float a, b, c, d;
    printf("Syötä neljä lukua, niin lasken niiden keskiarvon. \n");
    printf("Syötä ensimmäinen arvo: \n");
    scanf("%f", &a);
    printf("Syötä toinen arvo: \n");
    scanf("%f", &b);
    printf("Syötä kolmas arvo: \n");
    scanf("%f", &c);
    printf("Syötä neljäs arvo: \n");
    scanf("%f", &d);
    printf("Näiden neljän luvun keskiarvo on %.2f. \n", averageFour(a, b, c, d));

    int f;
    printf("Minkä luvun faktoriaalin haluat laskea: \n");
    scanf("%d", &f);
    printf("%d:n faktoriaali on %d. \n", f, factorial(f));

    int n, m;
    printf("Syötä kaksi lukua, niin kerron kumpi niistä on isompi. \n");
    printf("Syötä ensimmäinen luku: \n");
    scanf("%d", &n);
    printf("Syötä toinen luku: \n");
    scanf("%d", &m);
    printf("Näistä kahdesta luvusta isompi on %d. \n", big(n, m));

    int one;
    int two;
    int three;
    printf("Syötä kolme lukua, kerron mikä niistä on isoin. \n");
    printf("Syötä ensimmäinen luku: \n");
    scanf("%d", &one);
    printf("Syötä toinen luku: \n");
    scanf("%d", &two);
    printf("Syötä kolmas luku: \n");
    scanf("%d", &three);
    printf("Näistä luvuista isoin on %d. \n", large(one, two, three));

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

/*  Returns the factorial. */
int factorial(int f) {
    int factorialResult = f;
    int multiplier = f-1;
    for (int i = 1; i < f; i++) {
        factorialResult = factorialResult * multiplier;
        multiplier--;
    }
    return factorialResult;
}

/* Returns the biggest of 2 integers. */
int big(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

/* Returns the biggest of 3 integers. */
int large (int t, int l, int k) {
    if (l > t && l > k) {
        return l;
    }
    else if (k > t && k > l) {
        return k;
    }
}
