/* Kupac dobiva poseban popust ako je uclanjen i potrosio je barem 49.99 €, 
ili ako je student i potrosio je barem 29.99 €. 
Medutim, ako vec koristi nekakav kupon za popust, ne može dobiti posebni popust. 
Napisite program koji za zadane podatke ispisuje dobiva li kupac poseban popust ili ne.
*/

#include <stdio.h>

int main(void){
    int clan, stud, kup; 
    double potr;
    printf("Potrosio? Uclanjen? Student? Kupon?");
    scanf("%lf %d %d %d", &potr, &clan, &stud, &kup);
    if( ((clan && potr >= 49.99) || (stud && potr >= 29.99)) 
        && !kup) 
            printf("Dobiva poseban popust");
    else 
        printf("Ne dobiva poseban popust");
    return 0;
}