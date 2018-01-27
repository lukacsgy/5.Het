#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int szin, szama;
} Kartya;

Kartya uj_lap(char szin, char szam){
    Kartya lap;
    lap.szin = szin;
    lap.szama = szam;
    return lap;
}

int main(void){
    char szinek[4] = {'p', 'k', 't', 's'};
    char szamok[13] = {'2', '3', '4', '5', '6', '7','8','9','0','J','Q','K','A'};

    Kartya pakli[52];

    int i, j;
    for (j = 0; j < 4; j++){
        for(i = 0; i < 13; i++){
            pakli[j * 13 + i] = uj_lap(j, i);
        }
    }

    srand(time(0));
    Kartya csere;
    int rnd;

    for (i = 0; i < 52; i++){
        rnd = rand() % 52;
        if ( i > rnd){
            csere = pakli[i];
            pakli[i] = pakli[rnd];
            pakli[rnd] = csere;
        }
    }

    for(i = 0; i < 52; i++){

        printf("%c%c, ", szinek[pakli[i].szin], szamok[pakli[i].szama]);
    }

    return 0;
}
