/* Napisati program koji ucitava trajanje filma izrazeno u sekundama.
Program treba izracunati i ispisati koliko to trajanje iznosi u satima, minutama i sekundama. */

#include <stdio.h>

int main(void) {
    int sekunde, sati, minute;

    printf("Unesite broj sekundi: ");
    scanf("%d", &sekunde);

    sati = sekunde / 3600; // cjelobrojno dijeljenje
    sekunde = sekunde % 3600; // skraceni zapis: sekunde %= 3600;
    minute = sekunde / 60; // cjelobrojno dijeljenje
    sekunde = sekunde % 60; // skraceni zapis: sekunde %= 60;

    printf("%d h, %d min i %d sek\n", sati, minute, sekunde);

    return 0;
}
/* NAPOMENE:
1. Operacija '%' daje ostatak pri djeljenju. Primjerice,
    12 % 5 = 2 jer je 12 = 2*5 + 2 (ostatak je 2).
2. Primjerice, za unos sekunde = 7010 imamo:
    sati = 7010 / 3600 = 1
    sekunde = 7010 % 3600 = 3410 (ostatak pri djeljenju)
    minute = 3410 / 60 = 56
    sekunde = 3410 % 60 = 50
    Dakle, 7010 s = 1h 56min 50s
3. VAZNO: kada imamo izraz oblika x = x (operacija) y
          to skraceno mozemo pisati x (operacija)= y.
    (npr. x = x + 1 mozemo pisati x += 1).
*/
