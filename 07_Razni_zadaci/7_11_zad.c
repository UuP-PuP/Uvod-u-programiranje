/* Napisite program koji učitava prirodni broj n i ispisuje koliko njegovih znamenaka 
   je strogo veće od obje susjedne znamenke. Prva i posljednja znamenka ne mogu se brojiti. 
   Primjerice, za n=3527481 rezultat je 3 (znamenke 5, 7 i 8).
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    int broj = 0;
    int desna = n % 10;
    n /= 10;
    if(n > 0){
        int srednja = n % 10;
        n /= 10;
        while(n > 0){
            int lijeva = n % 10;
            if(srednja > lijeva && srednja > desna) ++broj;
            desna = srednja;
            srednja = lijeva;
            n /= 10;
        }
    }
    printf("%d\n", broj);
    return 0;
}