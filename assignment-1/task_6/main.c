/**
 * Ohjelma muuntaa käyttäjän syöttämät sekunnit tunneiksi, minuuteiksi ja sekuneiksi.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    int input_seconds = 0;
    printf("Syötä aika sekunteina: \n");
    scanf("%d", &input_seconds);

    /* muutetaan sekunnit täysiksi tunneiksi */
    short hours = (short) (input_seconds / 3600);

    /* muutetaan jäljelle jääneet sekunnit täysiksi minuuteiksi */
    short minutes = (short) ((input_seconds % 3600) / 60);

    /* otetaan jäljelle jääneet sekunnit talteen */
    short seconds = input_seconds % 60;

    /* taivutetaan selitetekstit oikein */
    char hours_text [] = "tuntia";
    char minutes_text [] = "minuuttia";
    char seconds_text [] = "sekuntia";
    if (hours == 1) {
        hours_text [5] = 0;
    }

    if (minutes == 1) {
        minutes_text [8] = 0;
    }

    if (seconds == 1) {
        seconds_text [7] = 0;
    }
    printf("Syötit %d sekuntia. Se on %d %s, %d %s ja %d %s.",
            input_seconds, hours, hours_text, minutes, minutes_text, seconds, seconds_text);
    return 0;
}