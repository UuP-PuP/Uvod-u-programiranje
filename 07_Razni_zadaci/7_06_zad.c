/* Napisite program koji unosi prirodne brojeve n i b (pri cemu je b >= 2). 
   Program treba ispisati koliko znamenaka ima zapis broja n u bazi b.
*/

#include <stdio.h>

int main(void){
    int n, b;
    printf("Unesite prirodne brojeve: ");
    scanf("%d %d", &n, &b);
    int n_kopija = n, br = 0;
    while(n > 0){
        ++br;
        n /= b;
    }
    printf("Broj %d u bazi %d ima %d znamenaka\n", n_kopija, b, br);
    return 0;
}