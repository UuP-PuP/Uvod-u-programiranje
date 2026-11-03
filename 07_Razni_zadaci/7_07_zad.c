/* Napisite program koji ucitava prirodni broj b (pri cemu je b >= 2). 
   Zatim program ucitava prirodne brojeve sve dok se ne unese 0. 
   Za svaki uneseni broj (osim 0) treba ispisati zbroj njegovih znamenaka u bazi b.
*/

#include <stdio.h>

int main(void){
    int b;
    printf("Unesite bazu: ");
    scanf("%d", &b);
    int n;
    while(1){
        printf("Unesite prirodni broj: ");
        scanf("%d", &n);
        if(!n) break;
        int zbroj = 0, n_kopija = n;
        while(n > 0){
            zbroj += n%b;
            n /= b;
        }
        printf("Zbroj znamenaka broja %d u bazi %d je %d\n", n_kopija, b, zbroj);
    }
    return 0;
}
