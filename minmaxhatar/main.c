#include <stdio.h>
#include <stdlib.h>

int maximum(int a, int b){
    int max = a;
    if (a < b){
        max = b;
    }
    return max;
}

int minimum(int a, int b){
    int min = a;
    if (a > b){
        min = b;
    }
    return min;
}
//proba
int main(void){
    printf("Hello world!\n");
    return 0;
}
