#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool elojel(int szam1, int szam2){
    bool egyezik;
    if (szam1 > 0 && szam2 > 0 || szam1 < 0 && szam2 < 0)
        egyezik = true;

    return (egyezik);

}

int main(void){
    int szam1, szam2;

    printf("Add meg az elso szamot: ");
    scanf("%d", &szam1);
    printf("Add meg a masodik szamot: ");
    scanf("%d", &szam2);

    bool egyezik = elojel(szam1,szam2);

    if(egyezik){
        printf("A 2 szam azaonos elojelu");
    }
    else{
        printf("A 2 szam elojele nem egyezik");
    }

    return 0;
}
