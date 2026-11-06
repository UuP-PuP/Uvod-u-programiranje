/* Rijesite prethodni zadatak tako da prvo prebrojite koliko znamenaka ima ucitani broj, 
   a zatim deklarirate niz cija je duljina jednaka broju znamenaka.
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodni broj: ");
    scanf("%d", &n);
    int kopija_n = n, br_znam = 0;
    while(kopija_n > 0){
        ++br_znam;
        kopija_n/=10;
    }
    int a[br_znam], znam[10] = {0}, i = 0;
    while(n > 0){
        ++znam[n%10];
        a[i++] = n%10;
        n /= 10;
    }
    printf("Znamenke ucitanog broja su:\n");
    for(--i; i >= 0; --i)
        printf("%d ", a[i]);
    printf("\n");
    for(i = 0; i < 10; ++i)
        printf("Znamenka %d javlja se %d puta\n", i, znam[i]);
    return 0;
}