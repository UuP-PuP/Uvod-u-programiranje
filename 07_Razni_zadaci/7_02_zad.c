/* Napisite program koji unosi cijeli broj n 
   te u padajucem poretku (od najveceg do najmanjeg) ispisuje sve prirodne brojeve 
   strogo manje od n koji su relativno prosti s n.
   Podsjetnik: brojevi a i b su relativno prosti ako im je jedini zajednicki djelitelj broj 1
*/

#include <stdio.h>

int main(void){
    int n, i;
    printf("Unesite cijeli broj: ");
    scanf("%d", &n);
    for(i = n - 1; i > 0; --i){
        //provjera relativne prostosti
        int d;
        for(d = 2; d <= i; ++d)
            if(n%d == 0 && i%d == 0) // nasli smo zajednickog djelitelja
                break;
        if(d == i+1) // znaci da je for petlja dosla do kraja (bez da smo koristili break)
            printf("%d\n", i);
    }
    return 0;
}

/* Napomene:
    - buduci da brojeve moramo ispisati u padajucem poretku,
      for petlja po varijabli i krece od n-1, ide prema 0 te ju u svakoj iteraciji dekrementiramo
    - objasnjenje za liniju 19 je sljedece. Ako smo pronasli zajednicki djelitelj i prekinuli petlju pomocu naredbe break,
      tada se for petlja po d prekida prije nego je vrijednost od d dosla do i+1 (to je zadani uvjet prekida petlje).
      Ako je vrijednost od d dosla do i+1, znaci da se petlja prekinula bez break, 
      odnosno da nismo pronasli zajednicki dfjelitelj, sto upravo znaci da su brojevi relativno prosti
      Varijablu d morali smo obavezno deklarirati izvan for petlje (koja ide po d), inace linija 19 ne bi bila moguca
*/
