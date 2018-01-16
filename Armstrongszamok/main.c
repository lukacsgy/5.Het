#include <stdio.h>
#include <stdlib.h>

int szamjegy(int szam){
    int db = 0;

    while(szam > 0){
        szam = szam / 10;
        db++;
    }
    return(db);
}

int hatvany(int szam, int kitevo){
    int i, eredmeny = 1;

    for(i = 0; i < kitevo; i++){
        eredmeny *= szam;
    }

    return(eredmeny);
}

int main(void){
    int i, j, szam, kitevo;

    for (i = 1; i < 10000; i++){

        kitevo = szamjegy(i);
        int alap = i;
        int osszeg = 0;
        int db = 0;
        int szj[kitevo];

        while(i > 0){
            szj[db] = i % 10;
            i /= 10;
            db++;
        }

        for(j = 0; j < kitevo; j++){
            osszeg += hatvany(szj[j], kitevo);
        }

        if (alap == osszeg){printf("%5d," ,osszeg);}

    }

    return 0;
}
