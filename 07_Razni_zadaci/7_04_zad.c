/* Napisite program koji ucitava cijele brojeve dok ne ucita 0. 
   Program treba ispisati treba ispisati najveci ucitani cijeli broj (ne racunajuci zadnje ucitanu 0)
    te njegov indeks.
*/

#include <stdio.h>

int main(void){
   int n, max_broj, max_ind, i = 0, prvi = 1;
   while(1){
        printf("Unesite cijeli broj: ");
        scanf("%d", &n);
        if(n == 0)
             break;
        ++i;
        if(prvi == 1|| n >= max_broj){
            max_broj = n;
            max_ind = i;
            prvi = 0;
        }
   }
   printf("Najveci broj je %d, na indeksu %d\n", max_broj, max_ind);
   return 0;
}

/* Napomene:
    - buduci ne postoji najmanji cijeli broj, varijablu max_broj ne mozemo inicijalizirati
    - stoga cemu ju inicijalizirati na prvi ucitani broj
    - za to nam sluzi varijabla (flag) prvi koja je na pocetku 1 i zato se u prvom prolasku
      kroz petlju izvrsi if blok (linije 16-20). Nakon toga ju postavljamo nas 0 te uvjet u liniji 16
      ovisi iskljucivo o uvjetu n >= max_broj
*/