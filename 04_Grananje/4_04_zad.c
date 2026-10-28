// Napisite program koji provjerava je li uneseni broj paran i ispisuje pripadnu poruku. 
 
 #include <stdio.h>

int main(void){
    int x, r;
    scanf("%d", &x);
    r = x%2;
    if(r == 0)
        printf("Paran je!\n");
    else 
        printf("Neparan je!\n");
    printf("Kraj.\n"); 
    return 0;
}

/* NAPOMENE:
    - ako u liniji 9 napisemo if(r = 0), ovo nije testiranje jednakosti nego pridruzivanje vrijednosti.
        Sada varijabla r postaje 0. Ono sto je vaznije je da izraz r = 0 vraća vrijednost pridruživanja (a to je 0).
        Stoga bi onda uvijek bilo if(0)
    - else mozemo izostaviti. To radimo kad zelimo nesto izvrsiti pod nekim uvjetom, inace nastavljamo dalje s izvrsavanjem koda
    - mozemo napisati i if(x\%2 == 0) umjesto da x\%2 spremamo u zasebnu varijablu
*/