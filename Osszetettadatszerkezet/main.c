#include <stdio.h>
#include <stdlib.h>

typedef struct Datum {
    int ev, ho, nap;
} Datum;

typedef struct Versenyzo {
    char nev[31];
    Datum szuletes;
    int helyezes;
} Versenyzo;

void datum_kiir(Datum d);

void versenyzo_kiir(Versenyzo v);

int main() {
    Versenyzo versenyzok[5] = {
        { "Am Erika", {1984, 5, 6}, 1 },
        { "Break Elek", {1982, 9, 30}, 3 },
        { "Dil Emma", {1988, 8, 25}, 2 },
        { "Kasza Blanka", {1979, 6, 10}, 5 },
        { "Reset Elek", {1992, 4, 5}, 4 },
    };

    /* 0-s versenyzõ neve - printf %s */
    printf("%s\n", versenyzok[0].nev);
    /* 2-es versenyzõ helyezése */
    printf("%d\n", versenyzok[2].helyezes);
    /* 4-es versenyzõ születési dátumát a megadott függvénnyel */
    printf("%d\n", versenyzok[4].szuletes);
    /* 1-es versenyzõ nevének kezdõbetûjét (ne feledd, a sztring karaktertömb) */
    /* az 1-es versenyzõ dobogós-e? igen/nem, akár ?: operátorral, de egy printf-fel */
    /* az 4-es versenyzõ gyorsabb-e, mint a 3-as versenyzõ? */
    /* az 1-es versenyzõ ugyanabban az évben született-e, mint a 2-es? */
    /* egészítsd ki a versenyzo_kiir() függvényt,
     * aztán írd ki az 1-es versenyzõ összes adatát */
    /* végül listázd ki az összes versenyzõt sorszámozva, összes adatukkal. */

    return 0;
}

void datum_kiir(Datum d) {
    printf("%d.%d.%d.\n", d.ev, d.ho, d.nap);
}

void versenyzo_kiir(Versenyzo v) {
    /* a versenyzõ összes adatának kiírása */
}
