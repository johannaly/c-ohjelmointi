/**
 * Käyttäjä syöttää euromäärän ja ohjelma laskee millaisia seteleitä määrällä saa. Käytettävissä olevat setelit ovat
 * 5, 10, 20, 50, 100, 200 ja 500 euron seteleitä. Lopuksi ohjelma kertoo jäikö rahaa vielä jäljelle.
 * 180919 Johanna Lyytinen
 */

#include <stdio.h>

int main() {
    int euros = 0;
    printf("Syötä euromäärä: \n");
    scanf("%d", &euros);

    short fivehundred = euros / 500;
    int remaining_euros = euros - fivehundred * 500;

    short twohundred = remaining_euros / 200;
    remaining_euros = remaining_euros - twohundred * 200;

    short onehundred = remaining_euros / 100;
    remaining_euros = remaining_euros - onehundred * 100;

    short fifty = remaining_euros / 50;
    remaining_euros = remaining_euros - fifty * 50;

    short twenty = remaining_euros / 20;
    remaining_euros = remaining_euros - twenty * 20;

    short ten = remaining_euros / 10;
    remaining_euros = remaining_euros - ten * 10;

    short five = remaining_euros / 5;
    remaining_euros = remaining_euros - five * 5;

    printf("Syöttämäsi määrä oli %d euroa. \n"
           "Se on %d kappaletta 500 euron seteliä, \n"
           "%d kappaletta 200 euron seteliä, \n"
           "%d kappaletta 100 euron seteliä, \n"
           "%d kappaletta 50 euron seteliä, \n"
           "%d kappaletta 20 euron seteliä, \n"
           "%d kappaletta 10 euron seteliä ja \n"
           "%d kappaletta 5 euron seteliä. \n"
           "Jäljelle jää %d euroa.",
           euros, fivehundred, twohundred, onehundred, fifty, twenty, ten, five, remaining_euros);
    return 0;
}