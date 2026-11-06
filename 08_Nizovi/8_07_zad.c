/* Napisite program koji ucitava cijele brojeve sve dok se ne ucita 15 brojeva 
   ili broj 0 te ih sprema u niz (0 se isto sprema u niz). Zatim se ucitava cijeli broj n 
   te se iz niza brisu svi brojevi djeljivi s n.
*/

#include<stdio.h>

int main(void){
    int a[15], l = 0, n;
    while(l < 15){
        printf("Unesite cijeli broj: ");
        scanf("%d", &a[l++]);
        if(a[l-1] == 0) break;
    }
    printf("Unesite prirodni broj: ");
    scanf("%d", &n);
    int j = 0;
    for(int i = 0; i < l; ++i){
        if(a[i]%n != 0){
            if(i > j) a[j] = a[i];
            ++j;
        }
    }
    l = j;
    for(int i = 0; i < l; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

/* Napomene:
    - varijabla i cita sve elemente niza, a varijabla j oznacava poziciju na koju cemo spremati elemente 
      koje zelimo zadrzati u nizu (brojevi koji nisu djeljivi s n) 
    - zadatak smo mogli rijesiti uzastopnom primjenom rjesenja prethodnog zadatka, no ovo rjesenje je efikasnije
*/