#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void){
    int i, j, N, szam, szamok[100] = {0};
    bool egyforma;

    srand(time(0));

    printf("Mennyi veletlen szam legyen(max 100):");
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        do{
            szam = rand()%100+1;

            egyforma = false;
            for (j = 0; j < i; j++){
                if(szamok[j] == szam){
                    egyforma = true;
                }
            }
        }while(egyforma);

    szamok[i] = szam;
    printf("%3d, ", szamok[i]);
    }



    return 0;
}
