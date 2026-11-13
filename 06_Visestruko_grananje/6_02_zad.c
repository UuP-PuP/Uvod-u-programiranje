// Napisite program koji za ucitani prirodni broj n ispisuje je li zadnja znamenka broja 3^n prost broj ili ne.

#include <stdio.h>

int main(void){
    int n, pot = 1;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) pot = (pot * 3) % 10;
    printf("Zadnja znamenka ");
    switch(pot % 10){
        case 2:
        case 3:
        case 5:
        case 7:
            printf("je ");
            break;
        default:
            printf("nije ");
    }
    printf("prost broj\n");
    return 0;
}

/* Napomene:
    - Grane koje imaju iste naredbe možemo navesti jednu za drugom, a pripadne naredbe samo u posljednjoj grani
    - U ovom slucaju, to su grane case 2, case 3, case 5 i case 7. Naredbe u grani case 7 odnose se i na sve prijasnje grane.
*/
