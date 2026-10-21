#include <stdio.h>

int main(void) {
    int x, n = 0;
    double sum = 0, av = 0;
    do {
        printf("Unesite cijeli broj: ");
        scanf("%d", &x);
        sum += x;
        n++;
    } while(x != 0);
    av = sum/n;
    printf("Prosjek je %lf", av);
    return 0;
}
