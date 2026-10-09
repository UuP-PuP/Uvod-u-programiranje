/* Napisite program koji od korisnika trazi unos polumjera kugle r izrazenog u metrima. 
Program treba izracunati obujam kugle prema formuli V = 4/3 *pi *r^2.
Dobiveni rezultat ispisite u kubnim metrima koristeci 
znanstvenu notaciju (e-notaciju) s tri decimale. */

#include <stdio.h>

int main(void) {
    double r, V, pi = 3.14159; // moze i 3.14 :)

    printf("Unesi polumjer kugle u metrima: ");
    scanf("%lf", &r);
    
    V = (4.0 / 3.0) * pi * r * r * r; // ili npr 4.0/3, ali ne 4/3
    printf("Obujam kugle je: %.3e m^3\n", V);
    // ili %.3E za veliko E u e-notaciji

    return 0;
}

/* NAPOMENE:
1. Isprobajte 4/3 umjesto 4.0/3. Radi se o cjelobrojnom dijeljenju, dakle 4/3=1
*/
