/* Napisite program koji ucitava prirodni broj n i ispisuje koliko 
   razlicitih znamenaka sadrzi njegov decimalni zapis. 
   Primjerice, broj 303155 sadrzi cetiri razlicite znamenke (3, 0, 1, 5).
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    int broj = 0;
    for(int z = 0; z <= 9; ++z){
        int kopija = n;
        do{
            if(kopija % 10 == z) {
                ++broj;
                break;
            }
            kopija /= 10;
        }while(kopija > 0);
    }
    printf("Broj %d sadrzi %d razlicitih znamenaka\n", n, broj);
    return 0;
}