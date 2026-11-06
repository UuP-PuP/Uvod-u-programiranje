/* Napisite program koji cita cijele brojeve i sprema ih u niz sve dok se ne ucita 15 brojeva 
   ili broj 0 (koji nije dio niza). Program u ucitani niz cijelih brojeva dodaje broj 2x+1 
   ispred svakog parnog broja x. 
*/

#include <stdio.h>

int main(void){
    int a[30], n = 0, x;
    while(n < 15){
        printf("Unesite cijeli broj: ");
        scanf("%d", &x);
        if(!x) break;
        a[n++] = x;
    }
    int novi_n = n;
    for(int i = 0; i < n; ++i)
        if(a[i]%2 == 0) ++novi_n;

    int j = novi_n-1;
    for(int i = n-1; i >= 0; --i){
        a[j] = a[i];
        --j;
        if(a[i]%2 == 0){
            a[j] = 2*a[i]+1;
            --j;
        }
    }
    for(int i = 0; i < novi_n; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

/* Napomene:
    - prvo moramo prebrojiti kolika ce biti duljina novog niza (varijabla novi_n)
    - nakon toga. varijabla i cita elemente niza, krenuvsi od zadnjeg elementa
    - varijabla j pamti novu poziciju elemenata, krenuvsi od pozicije novi_n-1 (zadnja pozicija u nizu nakon dodavanja novih elemenata)
    - nakon sto element niza prepisemo na novu poziciju, provjerimo je li paran, te ako jest, dodamo ispred njega zadanu vrijednost
    - zadatak smo mogli rijesiti uzastopnom primjenom rjesenja prethodnog zadatka, no ovo rjesenje je efikasnije
*/