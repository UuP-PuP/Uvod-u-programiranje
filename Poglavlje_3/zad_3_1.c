/* Napisati program koji ucitava dva cijela broja te ispisuje njihov zbroj i razliku u decimalnom, oktalnom i heksadecimalnom zapisu.
Rezultate ispisati tablicno tako da svaki ispisani rezultat zauzima najmanje 10 mjesta.
Pretpostavljamo da su brojevi takvi da su im zbroj i razlika nenegativni cijeli brojevi. */

#include <stdio.h>

int main(void) {
    int a, b;
    int zbroj, razlika;
    printf("Unesite dva broja: ");
    scanf("%d %d", &a, &b);
    zbroj = a + b;
    razlika = a - b;
    printf("%-10s %10s %10s %10s\n", 
        "Rezultat", "Decimalno", "Oktalno", "Heks.");
    printf("%-10s %10d %10o %10x\n", 
        "Zbroj", zbroj, zbroj, zbroj);
    printf("%-10s %10d %10o %10x\n", 
        "Razlika", razlika, razlika, razlika);
    return 0;
}

/* NAPOMENE:
1. %s je format za string (niz znakova). 
2. 10 u %10s oznacava minimalni broj mjesta (popunjuje se prazninama).
3. - u %-10s oznacava poravnavanje lijevo (desno je bez -).
4. Formati %o, %x su za oktalni, odnosno heksadecimalni zapis broja.
*/
