/*Najvećžca dopustena tezina kofera u avionu je 20 kg. 
  Napisite program koji ucitava težinu (u kg) kofera putnika. 
  Ako je tezina manja ili jednaka dozvoljenoj, program ispisuje poruku Sretan put. 
  U suprotnom, program ucitava koliko kilograma putnik zeli izvaditi iz kofera te ispisuje novu tezinu kofera. 
  Ako je nova tezina manja ili jednaka dozvoljenoj, program ispisuje poruku Sretan put, 
  inace ispisuje poruku Kofer je i dalje pretezak!
*/

#include <stdio.h>

int main(void){
    double tezina;
    printf("Unesite tezinu kofera: ");
    scanf("%lf", &tezina);
    if(tezina <= 20)
        printf("Sretan put!\n");
    else{
        double za_izvaditi;
        printf("Unesite koliko cete kilograma izvaditi iz kofera: ");
        scanf("%lf", &za_izvaditi);
        double nova_tezina = tezina - za_izvaditi;
        printf("Nova tezina je %.2f\n", nova_tezina);
        if(nova_tezina <= 20)
            printf("Sretan put\n");
        else
            printf("Kofer je i dalje pretezak!\n");
    }
    return 0;
}

/* NAPOMENE:
  - varijabla za_izvaditi "zivi" samo unutar else bloka (ne mozemo ju koristiti izvan tog bloka)
  - ako ispustimo vitičaste zagrade kod else bloka, samo prva naredba se smatra dijelom else bloka, sve ostalo se izvršava uvijek

*/