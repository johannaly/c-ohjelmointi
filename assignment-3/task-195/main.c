/*
 * Account manager with menu: User can make deposits, do withdrawal, check the balance and end the Program.
 * 111019 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    int choice = 0;
    float balance = 0;

    while (1) {
        printf("Valikko: \n 1 = Tee talletus \n 2 = Tee nosto \n 3 = Tarkista saldo \n 4 = Lopeta \n");
        scanf("%d", &choice);

        if (choice == 1) {
            float deposit = 0;
            printf("Syötä talletuksen määrä: \n");
            scanf("%f", &deposit);
            balance = balance + deposit;
        } else if (choice == 2) {
            float withdrawal = 0;
            printf("Syötä noston määrä: \n");
            scanf("%f", &withdrawal);
            balance = balance - withdrawal;
        } else if (choice == 3) {
            printf("Saldo on %f \n", balance);
        } else if (choice == 4) {
            printf("Ohjelma lopetetaan. \n");
            break;
        } else {
            printf("Tarkista valinta: \n");
        }
    }
    return 0;
}