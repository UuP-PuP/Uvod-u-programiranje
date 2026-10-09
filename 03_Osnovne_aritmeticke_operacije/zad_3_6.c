/* Napisite program koji ucitava pocetnu cijenu proizvoda u eurima, 
    kolicinu narucenih proizvoda, iznos popusta u postocima i troškove dostave. 
    Program treba izracunati iznos konacne cijene narudzbe (s uracunatom kolicinom proizvoda, 
    popustom i trockovima dostave) te ju ispisati. Koristite operatore slozenog pridruzivanja.
*/

#include <stdio.h>

int main(void){
    double cijena, popust, dostava;
    int kolicina;

    printf("Unesite redom cijenu proizvoda, kolicinu narucenih proizvoda, popust te trosak dostave: ");
    scanf("%lf %d %lf %lf", &cijena, &kolicina, &popust, &dostava);
    cijena *= (1-popust/100); // cijena s popustom
    cijena *= kolicina; // cijena svih proizvoda zajedno
    cijena += dostava; // cijena s dodanim troskom dostave
    printf("Ukupna cijena je %.2lf\n", cijena);
    return 0;
}