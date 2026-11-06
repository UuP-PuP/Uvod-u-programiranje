/* Napisite program koji ucitava cijele brojeve sve dok se ne ucita 15 brojeva 
   ili broj 0 te ih sprema u niz (0 se isto sprema u niz). Iz niza je potrebno izbrisati prvi neparan broj.
*/

#include <stdio.h>

int main(void){
    int a[15], n = 0;
    while(n < 15){
        printf("Unesite cijeli broj: ");
        scanf("%d", &a[n++]);
        if(a[n-1] == 0) break;
    }
    for(int i = 0; i < n; ++i){
        if(a[i]%2 == 1){
            for(int j = i; j < n-1; ++j){
                a[j] = a[j+1];
            }
            --n;
            //break;
        }
    }
    for(int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

/* Napomene:
    - element brisemo iz niza tako da sve elemente nakon njega pomaknemo jedno mjesto ulijevo
      i time pregazimo element
*/