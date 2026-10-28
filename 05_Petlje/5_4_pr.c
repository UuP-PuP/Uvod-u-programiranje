// Korisnik unosi cijele brojeve sve dok ne unese 0. Treba ispisati prosjek unesenih brojeva (racunajuci i 0).

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


/* NAPOMENA:
    - umjesto do while petlje, mogli smo koristiti while petlju. Tada bi kod bio sljedeci:
        while(1){
            printf("Unesite cijeli broj: ");
            scanf("%d", &n);
            ++brojac;
            sum += n;
            if(n == 0)
                break;
        }
*/ 