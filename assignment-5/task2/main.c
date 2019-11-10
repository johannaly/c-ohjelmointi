/*
 * Create 2 dimensional array that can store Scandinavian countries and their capitals.
 *
 * 091119 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    char* countriesAndCapitals [5][2] = {
            "Suomi","Helsinki",
            "Ruotsi", "Tukholma",
            "Norja", "Oslo",
            "Islanti", "Reykjavik",
            "Tanska", "Kööpenhamina"};
    for (int i = 0; i < 5; ++i) {
        char* country = countriesAndCapitals[i][0];
        char* capital = countriesAndCapitals[i][1];
        printf("%s %s \n", country, capital);
    }
    return 0;
}