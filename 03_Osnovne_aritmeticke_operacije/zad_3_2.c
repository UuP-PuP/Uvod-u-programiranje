/* Napisite program koji ucitava pocetnu cijenu proizvoda u eurima i postotak popusta.
Program treba izracunati iznos popusta te konacnu cijenu proizvoda nakon popusta.
Sve rezultate potrebno je ispisati zaokruzeno na dvije decimale. 
Kod ispisa postotka potrebno je ispisati i znak \%. */

#include <stdio.h>

int main(void) {
    double cijena, postotak;
    double popust, konacna_cijena;

    printf("Unesite cijenu proizvoda: ");
    scanf("%lf", &cijena);
    printf("Unesite postotak popusta: ");
    scanf("%lf", &postotak);

    popust = cijena * postotak / 100;
    konacna_cijena = cijena - popust;

    printf("Pocetna cijena: %.2f EUR\n", cijena);
    printf("Popust: %.2f%% (%.2f EUR)\n", postotak, popust);
    printf("Konacna cijena: %.2f EUR\n", konacna_cijena);

    return 0;
}

/* NAPOMENE:
1. '.2' u %.2f daje ispis floata zaokruzen na dvije decimale.
2. '%%' daje ispis znaka '%'.
*/
