/* Napisite program koji deklarira niz duljine 7 u koji spremamo cijele brojeve. 
   Program zatim ucitava 7 cijelih brojeva te ih sprema u niz. 
   Nakon toga je potrebno brojeve ispisati u obrnutom redoslijedu.
*/

#include <stdio.h>

int main(void){
    int a[7];
    for(int i = 0; i < 7; ++i){
        printf("Unesite a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 6; i >= 0; --i)
        printf("%d ", a[i]);
    return 0;
}