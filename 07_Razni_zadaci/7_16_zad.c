/* Napisite program koji ucitava cijele brojeve sve do unosa nule, koja nije dio niza. 
   Program ispisuje broj promjena predznaka izmedu dvaju uzastopnih ucitanih brojeva. 
   Primjerice, za unos 2,-3,-5,7,-1,0 rezultat je 3.
*/

#include <stdio.h>

int main(void){
    int preth, x, broj = 0;
    printf("Unesite cijeli broj: ");
    scanf("%d", &preth);
    if( preth == 0){
        printf("0\n"); return 0;
    }
    while(x != 0){
        printf("Unesite cijeli broj: ");
        scanf("%d", &x);
        if((preth < 0 && x > 0) || (preth > 0 && x < 0))
            ++broj;
        preth = x;
    }
    printf("Broj promjena predznaka u nizu je %d\n", broj);
    return 0;
}