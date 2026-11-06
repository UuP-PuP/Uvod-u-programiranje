/* Napisite program koji ucitava cijele brojeve sve do unosa nule, koja nije dio niza. 
   Program ispisuje duljinu najduljeg uzastopnog strogo rastućeg dijela unesenog niza. 
   Ako je prvi uneseni broj nula, ispisite 0. 
   Primjerice, za unos 3,5,7,2,4,6,8,1,0 rezultat je 4 jer je najdulji strogo rastuci podniz 2,4,6,8.
*/

#include <stdio.h>

int main(void){
    int x, preth;
    printf("Unesite cijeli broj: ");
    scanf("%d", &x);
    if(x == 0){
        printf("0\n");
        return 0;
    }
    preth = x;
    int tren_duljina = 1, max_duljina = 1;
    while(x != 0){
        printf("Unesite cijeli broj: ");
        scanf("%d", &x);
        if(x > preth) ++tren_duljina;
        else tren_duljina = 1;
        if(tren_duljina > max_duljina) 
            max_duljina = tren_duljina;
        preth = x;
    }
    printf("Duljina najduljeg strogo rastuceg podniza je %d\n", max_duljina);
    return 0;
}