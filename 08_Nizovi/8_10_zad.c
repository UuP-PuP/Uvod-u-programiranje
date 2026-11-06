/* Napisite program koji cita cijele brojeve i sprema ih u niz sve dok se ne ucita 15 brojeva 
   ili broj 0 (koji nije dio niza). Program u ucitani niz cijelih brojeva dodaje broj 2x+1 
   iza svakog parnog broja x. 
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
        if(a[i]%2 == 0){
            a[j] = 2*a[i]+1;
            --j;
        }
        a[j] = a[i];
        --j;
        
    }
    for(int i = 0; i < novi_n; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}    