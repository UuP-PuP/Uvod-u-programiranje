/* Program koji ucitava tri cijela broja a, b i c te ispisuje vrijednost sljedecih izraza:
    - !(a && b) || c 
    - (!a || !b) == !(a && b) // Ovo je DeMorganov zakon
    - (a <= c) \&\& !(b > c)
*/

#include <stdio.h>

int main(void){
    int a, b, c;
    printf("Unesite tri cijela broja: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("!(%d && %d) || %d je %d\n", a, b, c, !(a && b) || c);
    printf("(!%d || !%d) == !(%d && %d) je %d\n", a, b, a, b, (!a || !b) == !(a && b));
    printf("(%d <= %d) && !(%d > %d) je %d\n", a, c, b, c, (a <= c) && !(b > c));
    return 0;
}

/* Napomena: kod upotrebe logičkih veznika, sve vrijednosti različite od 0 smatraju se istinitima.
   Zbog toga a, b i c mogu biti bilo koji cijeli brojevi, ne samo 0 i 1.
*/