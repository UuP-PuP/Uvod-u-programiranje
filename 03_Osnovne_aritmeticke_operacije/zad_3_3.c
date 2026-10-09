/* Napisite program koji ucitava realne brojeve x i y te ispisuje vrijednost 
    polinoma p(x,y)=x^3y-2xy^2+1. 
*/

#include <stdio.h>

int main(void){
    double x; // ili: double x,y,p;
    double y;
    double p;
    scanf("%lf %lf", &x, &y);
    p = x*x*x*y - 2*x*y*y + 1;
    printf("%f", p);
    return 0;
}

/* NAPOMENE:
1. Mozemo bez koristenja varijable p ispisati printf("%f", x*x*x*y - 2*x*y*y + 1);
2. Nemamo operator potenciranja! x^3 racunamo kao x*x*x.
*/
