#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int szin, szam;
}Kartya;

bool dupla_lap(Kartya tomb[]){
    bool dupla = false;
    int i, j;
    for (i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            if(tomb[i * 13 + j].szam == tomb[i * 13 + (j + 1)].szam){
                return dupla = true;
            }
        }
    }
}


bool hianyos_pakli(Kartya tomb[]){
    bool hianyos = false;
    int i, j;
    for (i = 0; i < 4; i++){
        j = 0;
        while(!hianyos && j < 13){
            if(tomb[i * 13 + j].szam > tomb[i * 13 + (j + 1)].szam){
                return hianyos = true;
            }
            j++;
        }
    }
}
int main(void){
    Kartya pakli[52];

    if (hianyos_pakli(pakli)){
        printf("Dupla valamelyik lap");
    }
    else if(dupla_lap(pakli)){
        printf("Hianyos");
    }
    else{
        printf("Pakli hazsnalatra alkalmas");
    }




    return 0;
}
