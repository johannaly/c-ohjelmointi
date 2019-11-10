/*
 * Create an array to store 6 Greek letters and correspondent western letters
 *
 * 081119 Johanna Lyytinen
 * 101119 jatkettu tehtävää Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    char* letters[6][2] ={
            "alfa", "a",
            "beta", "b",
            "gamma", "g",
            "delta", "d",
            "epsilon", "e",
            "omega", "o"};
    for (int i = 0; i < 6; i++) {
        char* greekLetter = letters[i][0];
        char* westernLetter = letters[i][1];
        printf("%s %s \n", greekLetter, westernLetter);
    }
    return 0;
}