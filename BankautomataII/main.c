#include <stdio.h>
#include <stdlib.h>

typedef struct Bankjegy{
    int erteke, db
}Bankjegy;


int main(void){
    int visz, i;
    Bankjegy penz[] = {{20000,10}, {10000,2}, {5000,5}, {2000,20}, {1000,0}, {500,5}, {200,20}, {100,40}, {50,80}, {20,100}, {10,200}, {5,100}, {0}};

    printf("Mennyi a visszajaro: ");
    scanf("%d", &visz);

    for(i = 0; penz[i].erteke != 0; i++){
        int db = visz / penz[i].erteke;
        if (db > 0 && db <= penz[i].db){
            printf(" %d x %d Ft", db, penz[i].erteke);
            visz -= db * penz[i].erteke;
        }

    }

    if (visz != 0){
        printf("Nincs mar ilyen kicsi erme: %d Ft\n", visz);
    }

    return 0;
}
