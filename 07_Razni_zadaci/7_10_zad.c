/* Napisite program koji ucitava prirodni broj n i ispisuje broj prijelaza između parne i neparne znamenke u njegovom decimalnom zapisu. 
   Primjerice, za n=238245 imamo 3 prijelaza: prijelaz s 2 na 3, s 3 na 8 i s 4 na 5.
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    int preth = n % 10, broj = 0;
    n /= 10;
    while(n > 0){
        int tren = n % 10;
        if(tren % 2 != preth % 2) ++broj;
        preth = tren;
        n /= 10;
    }
    printf("Broj prijelaza je %d\n", broj);
    return 0;
}