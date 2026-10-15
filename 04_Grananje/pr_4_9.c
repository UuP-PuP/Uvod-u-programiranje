/* Napisite program koji ucitava dva realna broja te ispisuje veci od ta dva broja.
*/

#include <stdio.h>

int main(void){
    int a, b, max;
    char c;
    printf("Unesite dva broja: ");
    scanf("%d %d", &a, &b);
    max = a >= b ? a : b;
    c = a >= b ? 'a' : 'b';
    printf("Veci je %c = %d.", c, max);
    return 0;
}

/* NAPOMENE:
    - mogli smo napisati printf("Veci je %c = %d.", a > b ? 'a' : 'b', a > b ? a : b); umjesto uvodenja varijabli max i c
    - mogli smo ovo rijesiti koristenjem if naredbe. Tada bi program bio sljedeci:
        int main(void){
            int a, b, max;
            char c;
            printf("Unesite dva broja: ");
            scanf("%d %d", &a, &b);
            if(a > b){
                max = a;
                c = 'a';
            }
            else{
                max = b;
                c = 'b';
            }
            printf("Veci je %c = %d.", c, max);
            return 0;
        } 
*/