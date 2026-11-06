/* Napidite program koji ucitava prirodni broj n i ispisuje je li njegov decimalni zapis palindrom, 
   odnosno čita li se jednako slijeva nadesno i zdesna nalijevo. 
   Primjerice, 12321 jest palindrom, a 12341 nije.
*/

#include <stdio.h>

int main(void){
    int n, kopija, obrnuti = 0;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    kopija = n;
    do{
        obrnuti = 10*obrnuti + kopija % 10;
        kopija /= 10;
    }while(kopija > 0);
    printf("%d %s palindrom\n", n, n == obrnuti ? "je" : "nije");
    return 0;
}