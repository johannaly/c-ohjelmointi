/*
 * A stone is dropped down from the top of Pisa tower. What is the final speed of the stone and how much time does the fall take?
 *
 * 091119 Johanna Lyytinen
 */

#include <stdio.h>
#include <math.h>

const float gravity = 9.81;
const float height = 55.68;
const float speedFirst = 0;

int main() {
    float speedFinal = sqrtf(2 * gravity * height);
    printf("Putoamisnopeus on %.2f. \n", speedFinal);
    printf("Kiven putoaminen kestää %.2f sekuntia. \n", (speedFinal - speedFirst) / gravity);
    return 0;
}