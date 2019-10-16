/*
 * Ohjelma generoi 50 satunaista lukua (1-10 välillä) ja kertoo, onko luku pienempi vai suurempi kuin 5.
 * 101019 Johanna Lyytinen
 *
 * Lisätään toimintoja: ohjelma laskee arvottujen lukujen summan ja keskiarvon.
 * 111019 Johanna Lyytinen
 */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int lower = 1, upper = 10, count = 50;
    int smallerAmount = 0;
    int biggerAmount = 0;
    int sameAmount = 0;
    float sum = 0;
    float average = 0;

    // Use current time as
    // seed for random generator
    srand(time(0));

    for (int i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        sum = sum + num;

        if (num < 5) {
            smallerAmount = smallerAmount + 1;
        }

        else if (num > 5) {
            biggerAmount = biggerAmount + 1;
        }

        else {
            sameAmount = sameAmount + 1;
        }
    }
    printf("Pienempiä kuin 5: %d kappaletta. \n", smallerAmount);
    printf("Suurempia kuin 5: %d kappaletta. \n", biggerAmount);
    printf("Yhtäsuuria kuin 5: %d kappaletta. \n", sameAmount);
    printf("Lukujen summa on %.2f. \n", sum);
    printf("Lukujen keskiarvo on %.2f. \n", sum / 50);
}


