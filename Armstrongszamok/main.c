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
int main()
{
    printf("Hello world!\n");
    return 0;
}
