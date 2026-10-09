/* Odrediti vrijednost varijable \kod{a}
tijekom izvodenja sljedeceg programa.
Pritom pretpostavljamo da je korisnik ucitao vrijednost 3. */

#include <stdio.h>

int main(void) {
    int a = 1; // inicijalizacija
    printf("a = %d, &a = %p\n", a, &a);
    // promjena vrijednosti
    a = 2;
    printf("a = %d, &a = %p\n", a, &a);
    // ucitamo 3
    scanf("%d", &a);
    printf("a = %d, &a = %p\n", a, &a);
    return 0;
}

/* NAPOMENE:
1. Vidimo da adresa ostaje ista, dok se vrijednost mijenja.
2. %p je format za adresu.
*/