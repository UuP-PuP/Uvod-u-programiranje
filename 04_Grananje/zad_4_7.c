/* Napisite program koji ucitava realne brojeve a, b i c. 
   Program ispisuje koliko realnih rjesenja ima kvadratna jednadzba ax^2 + bx +c = 0.
   Upute: koristite diskriminantu D = b^2 - 4ac.
*/

#include <stdio.h>

int main(void){
    double a, b, c;
    printf("Unesite tri realna broja: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = b*b - 4*a*c;
    if(d < 0)
        printf("Jednadzba %.2fx^2+%.2fx+%.2f = 0 nema realnih rjesenja\n", a, b, c);
    else if(d > 0)
        printf("Jednadzba %.2fx^2+%.2fx+%.2f = 0 ima dva realna rjesenja\n", a, b, c);
    else // slucaj kad je d == 0
        printf("Jednadzba %.2fx^2+%.2fx+%.2f = 0 ima jedno realno rjesenje\n", a, b, c);
    return 0;
}

/* NAPOMENE:
  - Da smo u linijama 15 i 17 imali if(d > 0) (dakle bez else), odnosno if(d == 0), 
    ispis programa bio bi isti. Razlika je u tome da su to tri razdvojene if naredbe i sve se tri provjere 
    izvrsavaju (iako samo jedna od njih moze biti istinita). 
  - U slucaju kad koristimo if-(else if)-else, cim se jedan if blok izvrsi, ostali se preskoce
*/