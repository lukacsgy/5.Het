#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int tip;

    srand(time(0));

    int szam = rand()%10+1;
    printf(" Melyik szamra gondoltam?\n");
    scanf("%d", &tip);

    do {
        if ( tip > szam){
            printf(" Kissebb szamra gondoltam!\n");
        }
        if ( tip < szam){
            printf(" Nagyobb szamra gondoltam!\n");
        }
        scanf("%d", &tip);
    }while (tip != szam);

    printf(" A szamot eltalaltad Gratulálok!!!");

    return 0;
}
