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

    /* 0-s versenyz� neve - printf %s */
    printf("%s\n", versenyzok[0].nev);
    /* 2-es versenyz� helyez�se */
    printf("%d\n", versenyzok[2].helyezes);
    /* 4-es versenyz� sz�let�si d�tum�t a megadott f�ggv�nnyel */
    printf("%d\n", versenyzok[4].szuletes);
    /* 1-es versenyz� nev�nek kezd�bet�j�t (ne feledd, a sztring karaktert�mb) */
    /* az 1-es versenyz� dobog�s-e? igen/nem, ak�r ?: oper�torral, de egy printf-fel */
    /* az 4-es versenyz� gyorsabb-e, mint a 3-as versenyz�? */
    /* az 1-es versenyz� ugyanabban az �vben sz�letett-e, mint a 2-es? */
    /* eg�sz�tsd ki a versenyzo_kiir() f�ggv�nyt,
     * azt�n �rd ki az 1-es versenyz� �sszes adat�t */
    /* v�g�l list�zd ki az �sszes versenyz�t sorsz�mozva, �sszes adatukkal. */

    return 0;
}

void datum_kiir(Datum d) {
    printf("%d.%d.%d.\n", d.ev, d.ho, d.nap);
}

void versenyzo_kiir(Versenyzo v) {
    /* a versenyz� �sszes adat�nak ki�r�sa */
}
