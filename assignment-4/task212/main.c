/*
 * 21.2. Function checks if the post code includes exactly 5 numbers.
 *
 * 291019 Johanna Lyytinen
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPostalcode(char* postalcode);

int main() {
    char postalcode[10];
    printf("Syötä postinumero: \n");
    gets(postalcode);

    if (isPostalcode(postalcode)) {
        printf("Syöttämäsi numero on postinumero. \n");
    }
    else {
        printf("Syöttämäsi numero ei ole postinumero. \n");
    }
    return 0;
}


bool isPostalcode(char* postalcode){
    if (strlen(postalcode) == 5) {
        for (int i = 0; i < 5; ++i) {
            if (!isdigit(postalcode[i])) {
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}