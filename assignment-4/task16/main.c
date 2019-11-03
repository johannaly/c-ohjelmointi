/*
 * 16. Function prints out a lotto row.
 *
 * 291019 Johanna Lyytinen
 */


#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

bool contains(int array[], int value);
int uniqueLotteryNumber(int array[]);
int lotteryNumber();

int main() {
    srand(time(0));

    printf("Ohjelma arpoo lottorivin. \n");
    int lotteryrow[7] = {-1, -1, -1, -1, -1, -1, -1};
    for (int i = 0; i < 7; i++) {
        lotteryrow[i] = uniqueLotteryNumber(lotteryrow);
    }

    for (int i = 0; i < 7; i++) {
        printf("%d ", lotteryrow[i]);
    }
    return 0;
}

/* funktio tarkastaa onko luku jo taulukossa */
bool contains(int array[], int value) {
    for (int i = 0; i < 7; ++i) {
        if (array[i] == value)
            return true;
    }
    return false;
}

/* funktio arpoo lottonumeron, jota ei ole vielä käytetty */
int uniqueLotteryNumber(int array[]) {
    int num = lotteryNumber();
    while (contains(array, num)) {
        num = lotteryNumber();
    }
    return num;
}

/* funktio generoi satunaisluvun */
int lotteryNumber() {
    int upper = 40;
    int lower = 1;
    return (rand() % (upper - lower + 1)) + lower;
}