/* Napisite program koji ucitava dva realna broja te znak za aritmeticku operaciju. 
   Program treba ispisati rezultat zadane operacije.
*/

#include <stdio.h>

int main(void){
    double a, b;
    char op;
    printf("Unesite dva broja: ");
    scanf("%lf %lf", &a, &b);
    printf("Unesite aritmeticku operaciju: ");
    scanf(" %c", &op); // primijetite rrazmak prije %c!
    switch(op){
        case '+': 
            printf("%f %c %f = %f\n", a, op, b, a+b);
            break;
        case '-': 
            printf("%f %c %f = %f\n", a, op, b, a-b);
            break;
        case '*': 
            printf("%f %c %f = %f\n", a, op, b, a*b);
            break;
        case '/': 
            if(b != 0.0)
                printf("%f %c %f = %f\n", a, op, b, a/b);
            else
                printf("Dijeljenje s 0 nije definirano!\n");
            break;
        default:
            printf("Uneseni znak ne predstavlja aritmeticku operaciju!\n");
    }
    return 0;
}

/* Napomene:
    - Kad ucitavamo znak aritmeticke operacije (linija 13), ufunkciji scanf smo ispred %c dodali razmak. Razlog za to je sljedeci
      Kod ucitavanja realnih brojeva, na kraju smo stisnuli 'enter', odnosno znak '\n'. Taj se znak nije spremio u varijablu nego je ostao u tzv. bufferu (ulaznom spremniku).
      Stavljam razmaka ispred %c rekli smo funkciji scanf da preskoci sve znakove praznine (razmak, prelazk u novi red) koje su ostali u bufferu nakon prethoodnog unosa.
      Kada ne bismo stavili razmak prije %c, u varijablu op spremio bi se znak '\n' (koji je ostao u bufferu nakon ucitavanja brojeva)
*/
