/* Napisite program koji učitava prirodni broj n, a zatim n cijelih brojeva. 
   Program ispisuje broj koji je najudaljeniji od svojeg sljedbenika te njegov redni broj pri ucitavanju (indeks). 
   Udaljenost se racuna kao apsolutna vrijednost razlike.
*/

#include <stdio.h>

int main(void){
    int n, max_razlika = 0, max_ind;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i){
        printf("Unesite cijeli broj: ");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n-1; ++i){
        int razlika = a[i] - a[i+1];
        if(razlika < 0) razlika = -razlika;
        if(razlika >= max_razlika){
            max_razlika = razlika;
            max_ind = i;
        }
    }
    printf("Indeks: %d, vrijednost: %d\n", max_ind, a[max_ind]);
    return 0;
}