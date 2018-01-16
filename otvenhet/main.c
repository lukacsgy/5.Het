#include <stdio.h>
#include <stdlib.h>

int main(void){
    int szam;

    printf("Add meg a szamot 1-99 kozott: ");
    scanf(" %d", &szam);

    switch(szam){
        case 10: printf("tiz");
        case 20: printf("husz");
    }
    return 0;
}
