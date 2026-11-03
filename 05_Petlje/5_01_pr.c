/*  Odredite vrijednost varijable x u svakom trenutku izvrsavanja sljedeceg programa. 
    Odredite sto ce program ispisati.
*/

#include <stdio.h>

int main(void) {
    int x = 100;
    printf("Postfiks:\n");
    printf("x: %d\n", x);
    printf("x++: %d\n", x++); // prvo vrati x, onda digni za 1
    printf("x nakon: %d\n", x);

    x = 100;
    printf("Prefiks:\n");
    printf("x: %d\n", x);
    printf("++x: %d\n", ++x);   // prvo digni za 1 pa vrati x
    printf("x nakon: %d\n", x);

    // dekrement:
    printf("Dekrement:\n");
    x = 100;
    printf("%d\n", --x);
    x = 100;
    printf("%d\n", x--);

    return 0;
}

/* Program ispisuje
    Postfiks:
    x: 100
    x++: 100
    x nakon: 101
    Prefiks:
    x: 100
    ++x: 101
    x nakon: 101
    Dekrement:
    99
    100
*/