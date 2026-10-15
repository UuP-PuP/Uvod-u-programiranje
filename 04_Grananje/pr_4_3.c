/* Program koji ucitava dva realna broja te ispisuje njihov kolicnik zaokružen na dvije decimale, 
    odnosno odgovarajucu poruku ako kolicnik nije moguce izracunati.
*/

#include <stdio.h>

int main(void){
    double a, b;
    printf("Unesite dva realna broja: ");
    scanf("%lf %lf", &a, &b);
    if(b != 0)
        printf("%.2f/%.2f = %.2f\n", a, b, a/b);
    else
        printf("Dijeljenje s 0 nije definirano!\n");
    return 0;
}

// NAPOMENA: provjerite sto ce se desiti ako probate neki broj podijeliti s 0
