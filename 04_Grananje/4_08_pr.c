/* Napisite program koji ucitava broj bodova nekog studenta na ispitu iz Uvoda u programiranje. 
   Program ispisuje koju ocjenu je taj student dobio, prema vazecoj bodovnoj skali.
*/

#include <stdio.h>

int main(void){
    int bodovi;
    printf("Unesite broj bodova: ");
    scanf("%d", &bodovi);
    if(bodovi >= 90) printf("Ocjena 5.\n");
    else if(bodovi >= 75) printf("Ocjena 4.\n");
    else if(bodovi >= 60) printf("Ocjena 3.\n");
    else if(bodovi >= 45) printf("Ocjena 2.\n");
    else printf("Pad ispita.\n");
    return 0;
}

/* NAPOMENE:
    - Primijetimo da bi bilo krivo izostaviti else-ove, odnosno napisati sljedece:
        if(bodovi >= 90) printf("Ocjena 5.\n");
        if(bodovi >= 75) printf("Ocjena 4.\n");
        if(bodovi >= 60) printf("Ocjena 3.\n");
        if(bodovi >= 45) printf("Ocjena 2.\n");
      U ovom bi se slucaju ispisalo previse toga. Primjerice, ako unesemo broj 78, tada se ispisuje_
        Ocjena 4
        Ocjena 3
        Ocjena 2
    - Također bi neispravno bilo sljedeće:
        if(bodovi >= 45) printf("Ocjena 2.\n");
        else if(bodovi >= 60) printf("Ocjena 3.\n");
        else if(bodovi >= 75) printf("Ocjena 4.\n");
        else if(bodovi >= 90) printf("Ocjena 5.\n"); 
      Primjerice, ako unesemo 78, tada se ispisuje
        Ocjena 2
      Naime, već je prvi uvjet (if(bodovi >= 45)) zadovoljen, a ostali se stoga ni ne provjeravaju

*/