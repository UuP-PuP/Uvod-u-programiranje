/* Napisite program koji ucitava cijele brojeve dok ne ucita 0. 
   Program treba ispisati onog koji ima najvecu apsolutnu vrijednost 
   te koji je po redu bio učitan (pocinjemo brojiti od 1). 
   Ako ima vise brojeva za koji se postize maksimum, treba ispisati onog posljednjeg.
*/

#include <stdio.h>

int main(void){
    int x, i = 0, max_broj, max_aps = 0, max_ind;
    while(1){
        printf("Unesite cijeli broj: ")
        scanf("%d", &x);
        if(x == 0) break;
        ++i;
        int aps = x < 0 ? -x : x;
        if(aps >= max_aps){
            max_aps = aps;
            max_ind = i;
            max_broj = x;
        }
    }
    if(i > 0) printf("Broj %d ima najveću apsolutnu vrijednost, indeks: %d\n", max_broj, max_ind);
    else printf("Nije unesen nijedan broj različit od nule.\n");
    return 0;
}

/* Napomene:
    - buduci da je absolutna vrijednost bilo kojeg cijelog broja veca ili jednaka 0,
      varijablu max_abs (u koju spremamo najvecu unesenu apsolutnu vrijednost) mozemo inicijalizirati na 0,
      a prilikom unosa prvog broja ce se u nju spremiti stvarna maksimalna apsolutna vrijednost
*/