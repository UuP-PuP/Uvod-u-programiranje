// Napisite program koji ucitava prirodan broj n te ispisuje koliko je n!

#include <stdio.h>

int main(void){
    int n;
    long int fact = 1;
    printf("Unesite broj: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        fact *= i;
    printf("%d! = %ld", n, fact);
    return 0;
}

/* NAPOMENE:
    - mogli smo pisati i++ umjesto ++i buduci da nam je samo bitno da se i inkrementira, a nije nam bitna povratna vrijednost izraza
    - za varijablu fact koristili smo tip unsigned long long (vrlo veliki prirodan broj) jer faktorijele mogu bili vrlo velike vrijednost.
        Medutim, i dalje ne mozemo spremiti faktorijele za sve vrijednosti, npr. vec za n = 70 nije moguce spremiti 70!
    - varijablu i mogli smo deklarirati izvan for petlje. 
      Ako ju deklariramo unutar for petlje, mozemu ju koristiti samo unutar for petlje (izvan for petlje ne postoji)
    - umjesto for petlje, mogli smo koristiti while petlju. Tada bi kod bio sljedeci:
        int i = 0;
        while(i <= n){
            fact *= i;
            ++i;
        }
*/