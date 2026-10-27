// Korisnik upisuje brojeve sve dok ne unese 0. Program računa prosjek svih neparnih učitanih brojeva.

#include <stdio.h>

int main(void){
    int x, sum = 0, n = 0;
    while(1){
        printf("Unesite broj: ");
        scanf("%d", &x);
        if(x == 0) break; // ili if(!x) break;
        if(x%2 == 0) continue; // ili if(!x%2) continue;
        sum += x;
        n++;
    }
    if(n == 0) printf("Nije ucitan nijedan neparan broj!");
    else printf("Prosjek je %f", (double)sum/n);
    return 0;
}

/* NAPOMENE:
    - u liniji 16 imamo izraz (double)sum. ovo predstavlja pretvorbu (castanje) varijable sum (koja je tipa int) u tip double.
        Ovo smo napravili kako bismo imali realno dijeljenje (inače bi izraz sum/brojac bio cjelobrojno dijeljenje).
        Mogli smo odmah varijablu sum deklarirati kao tip double pa tada ne bismo morali raditi pretvorbu
*/