/* Napisite program koji ucitava prirodni broj n te ispisuje sve njegove znamenke, 
   krenuvsi s najznacajnijom znamenkom. Nakon toga, za svaku znamenku ispisuje koliko se puta javlja.
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodni broj: ");
    scanf("%d", &n);
    int a[100], znam[10] = {0}, i = 0;
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

/* Napomene:
    - elemente niza znam morali smo inicijalizirati na 0, inače izraz ++znam[n%10] ne bi imao smisla
*/