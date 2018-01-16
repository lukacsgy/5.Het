#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool szokoev(int ev){
    bool szoko = false;
    if ( ev % 4 == 0 && ev % 100 != 0 || ev % 400 == 0){
        szoko = true;
    }
    return (szoko);
}
int main(void){
    int ev;

    printf("Add meg az ev-et: ");
    scanf("%d", &ev);

    bool vizsgalat = szokoev(ev);

    if(vizsgalat){
        printf("Ez szoko ev!");
    }
    else{
        printf("Nem volt szokoev!");
    }
    return 0;
}
