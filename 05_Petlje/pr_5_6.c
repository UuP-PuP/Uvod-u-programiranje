// Napisite program koji za uneseni prirodni broj provjerava je li prost ili ne te ispisuje odgovarajucu poruku

#include <stdio.h>

int main(void){
    int n, i;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    int prost = 1;
    for(i=2; i<n; i++)
        if(n%i==0) {
            prost = 0;
            break;
        }
    if(prost && n > 1) printf("%d je prost", n);
    else printf("%d nije prost broj");
    return 0;
}

/* NAPOMENE:
    - umjesto koristenja varijable (zastavice, engl. flag), mogli smo koristiti varijablu i za provjeru je li broj prost u liniji 13
      Ako smo pronasli djelitelja broja, for petlju prekidamo prije nego je i stigla do n (tj. vrijednost od i je manja od n)
      Ako nismo pronasli djelitelja od i, tada for petlja zavrsava kad vrijednost od i postane n
      Tada bi provjera bila sljedeca: 
        if(i == n && n > 1) printf("Uneseni broj je prost\n");
      U ovom slucaju moramo varijablu i deklarirati izvan for petlje (jer inace ona nestaje nakon izlaska iz petlje pa ne mozemo napraviti gornju provjeru)!
*/