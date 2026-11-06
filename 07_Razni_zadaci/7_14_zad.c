/* Napišite program koji ucitava prirodni broj n i 
   ispisuje njegov najveći prosti djelitelj. 
   Primjerice, za n=84 rezultat je 7. Pretpostavite da je n >= 2.
*/

#include <stdio.h>

int main(void){
    int n, najveci = 1;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    int kopija_n = n;
    for(int d = 2; d <= n / d; ++d){
        while(n % d == 0){
            najveci = d;
            n /= d;
        }
    }
    if(n > 1) najveci = n;
    printf("Najveci prosti djelitelj od %d je %d\n", kopija_n, najveci);
    return 0;
}