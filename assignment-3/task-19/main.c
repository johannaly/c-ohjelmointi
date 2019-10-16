/*
 * Program throws dice 100 times and tells amounts of different values (1, 2, 3, 4, 5, and 6).
 * 111019 Johanna Lyytinen
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1, upper = 6, count = 100;
    int amounts[6] = {0, 0, 0, 0, 0, 0};

    // Use current time as
    // seed for random generator
    srand(time(0));

    for (int i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        amounts[num -1] = amounts[num-1] +1;
    }

    printf("Noppa heitti ykkösiä: %d kappaletta. \n", amounts[0]);
    printf("Noppa heitti kakkosia: %d kappaletta. \n", amounts[1]);
    printf("Noppa heitti kolmosia: %d kappaletta. \n", amounts[2]);
    printf("Noppa heitti nelosia: %d kappaletta. \n", amounts[3]);
    printf("Noppa heitti vitosia: %d kappaletta. \n", amounts[4]);
    printf("Noppa heitti kutosia: %d kappaletta. \n", amounts[5]);
    return 0;
}