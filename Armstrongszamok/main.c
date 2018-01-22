#include <stdio.h>
#include <stdlib.h>

int mekkora(int szam){
    int db = 0;

    while(szam > 0){
        szam = szam / 10;
        db++;
    }
    return(db);
}

int hatvany(int szam, int ertek){
    int i, eredmeny = 1;

    for(i = 0; i < ertek; i++){
        eredmeny *= szam;
    }
    return(eredmeny);
}

int main(void){
    int i;

    printf("Armstrong szamok: ");
    for (i = 0; i < 10000; i++){
        int kitevo = mekkora(i);
        int osszeg = 0;
        int szam = i;

        while (szam > 0){
            osszeg += hatvany(szam % 10, kitevo);
            szam /= 10;
        }
        if (i == osszeg){
            printf("%d, ", osszeg);
        }
    }

    return 0;
}
