#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int i, index, lotto[90];

    for (i = 0; i < 90; i++){
        lotto[i]= i + 1;
    }
    srand(time(0));

    for (i = 0; i < 5; i++){
        do{
            index = rand() %90 + 1;


        }while(lotto[index] == 0);

        printf("%d, ", lotto[index]);
        lotto[index] = 0;
    }

    return 0;
}
