#include <stdio.h>

int main(void) {
    int x = 100;
    printf("Postfiks: ");
    printf("x: %d\n", x);
    printf("x++: %d\n", x++); // prvo vrati x, onda digni za 1
    printf("x nakon: %d", x);

    x = 100;
    printf("Prefiks: ");
    printf("x: %d\n", x);
    printf("++x: %d\n", ++x);   // prvo digni za 1 pa vrati x
    printf("x nakon: %d\n", x);

    // dekrement:
    x = 100;
    printf("%d\n", --x);
    x = 100;
    printf("%d\n", x--);

    return 0;
}