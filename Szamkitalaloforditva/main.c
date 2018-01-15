#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int szam, tip;
    char valasz;

    printf("Add meg a szamot 1-100 kozott: ");
    scanf("%d", &szam);

    srand(time(0));
    tip = rand()%10+1;

    do{
        printf("A szam %d-nél kissebb? (I)gen vagy (N)em", tip);
        scanf(" c%", &valasz);

        switch(valasz){
            case 'I':
            case 'i':
                tip = rand()tip+1;
                break;
            case 'N':
            case 'n':
                tip = rand()%10+tip;
                break;
        }
    }while(tip != szam);
    Printf("Kitalaltam a szam amire gondoltal: %d", tip);

    return 0;
}
