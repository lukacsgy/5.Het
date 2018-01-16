#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int osztoi(int szam){
    int i, db = 0;
    for(i = 0; i < szam; i++){
        if(szam % i == 0){
            db++;
        }
    }
    return db;
}

bool hetes(int szam){
    int maradek;
    bool het = false;
    do{
        maradek = szam % 10;
        if (maradek == 7){het = true;}
        szam /= 10;
    }while(szam > 0 && !het);
    return !het;
}


int main(void){

    printf("Hello world!\n");
    return 0;
}
