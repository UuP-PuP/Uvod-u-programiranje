/* Napisite program koji ucitava dva cijela broja 
te im zatim ispisuje vrijednost. */

#include <stdio.h>

int main(void) {
    int a;
    int b; // ili int a, b;
    scanf("%d %d", &a, &b); // &a dohvaca adresu od a 
    printf("%d %d", a, b);
    return 0;
}

/* NAPOMENE:
1. Moze i scanf("%d%d", &a, &b);
scanf ucita jedan int, potom automatski 'proguta' sve bjeline,
potom ucita drugi int. (Dakle, upisemo prvi broj, ENTER, drugi broj.)
Medutim, kod drugih formata %s, %c i %[, scanf automatski nece ignorirati
bjeline!
2. Probajte ucitati 9000000000. Sto se ispisuje? Zasto?
*/