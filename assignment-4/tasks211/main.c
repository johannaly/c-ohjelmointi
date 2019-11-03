/* Funktioharjoittelua:
 *
 * 21.1. Function converts the text to morse code characters.
 *
 * 261019 Johanna Lyytinen
 * 2910119 jakettu tehtävää Johanna Lyytinen
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printMorseLetter(char letter);
void printMorse(char* text);

int main() {
    char text[160];
    printf("Syötä teksti minkä haluat muuntaa morse-koodiksi: (maksimikoko 160 merkkiä) \n");
    gets(text);
    printMorse(text);
    return 0;
}

void printMorse(char* text) {
    int length = strlen(text);
    for (int i = 0; i < length; i++) {
        printMorseLetter(text[i]);
        printf(" ");
    }
}

void printMorseLetter(char letter) {
    switch (tolower(letter)) {
        case 'a':
            printf(".-");
            break;
        case 'b':
            printf("-...");
            break;
        case 'c':
            printf("-.-.");
            break;
        case 'd':
            printf("-..");
            break;
        case 'e':
            printf(".");
            break;
        case 'f':
            printf("..-.");
            break;
        case 'g':
            printf("--.");
            break;
        case 'h':
            printf("....");
            break;
        case 'i':
            printf("..");
            break;
        case 'j':
            printf(".---");
            break;
        case 'k':
            printf("-.-");
            break;
        case 'l':
            printf(".-..");
            break;
        case 'm':
            printf("--");
            break;
        case 'n':
            printf("-.");
            break;
        case 'o':
            printf("---");
            break;
        case 'p':
            printf(".--.");
            break;
        case 'q':
            printf("--.-");
            break;
        case 'r':
            printf(".-.");
            break;
        case 's':
            printf("...");
            break;
        case 't':
            printf("-");
            break;
        case 'u':
            printf("..-");
            break;
        case 'v':
            printf("...-");
            break;
        case 'w':
            printf(".--");
            break;
        case 'x':
            printf("-..-");
            break;
        case 'y':
            printf("-.--");
            break;
        case 'z':
            printf("--..");
            break;
        case '0':
            printf("-----");
            break;
        case '1':
            printf(".----");
            break;
        case '2':
            printf("..---");
            break;
        case '3':
            printf("...--");
            break;
        case '4':
            printf("....-");
            break;
        case '5':
            printf(".....");
            break;
        case '6':
            printf("-....");
            break;
        case '7':
            printf("--...");
            break;
        case '8':
            printf("---..");
            break;
        case '9':
            printf("----.");
            break;
        case '?':
            printf("..--..");
            break;
        case '/':
            printf("-..-.");
            break;
        case '=':
            printf("-...-");
            break;
        case ':':
            printf("---...");
            break;
        case ',':
            printf("--..--");
            break;
        case '.':
            printf(".-.-.-");
            break;
        case ' ':
            printf("   ");
            break;
    }
}