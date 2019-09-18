/**
 * Käyttäjä syöttää auton nopeuden ja matkan, ohjelma laskee käytetyn ajan tunteina sekä kokonaisina tunteina ja minuutteina.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    float speed = 0;
    float distance = 0;
    float time = 0;

    printf("Syötä auton nopeus (km/h): \n");
    scanf("%f", &speed);
    printf("Syötä ajettu matka (km): \n");
    scanf("%f", &distance);
    time = distance / speed;
    printf("Matkaan kului %.2f tuntia" , time);

    short time_h = (short) time;
    short time_min = time * 60;
    short time_modulo = time_min % 60;
    printf(" eli %d tuntia ja %d minuuttia.", time_h, time_modulo);
    return 0;
}