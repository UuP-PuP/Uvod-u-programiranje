/* Napisite program koji ucitava cijele brojeve sve dok se ne ucita 15 brojeva ili broj 0 
   te ih sprema u niz (0 se ne sprema) tako da je niz cijelo vrijeme sortiran uzlazno. 
*/

#include <stdio.h>

int main(void){
    int a[15], n = 0, x;
    while(n < 15){
        printf("Unesite cijeli broj: ");
        scanf("%d", &x);
        if(x == 0) break;
        if(n == 0){
            a[n++] = x;
            continue;
        }
        if(x <= a[0]){
            for(int i = n-1; i >= 0; --i)
                a[i+1] = a[i];
            a[0] = x;
        }
        else if(x >= a[n-1]){
            a[n] = x;
        }
        else{
            for(int i = 0; i < n; ++i){
                if(x >= a[i] && x <= a[i+1]){
                    for(int j = n-1; j >= i+1; --j)
                        a[j+1] = a[j];
                    a[i+1] = x;
                    break;
                }
            }
        }
        ++n;
    }
    for(int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

/* Napomene:
    - element dodajemo u niz na indeks i tako da sve elemente od indeksa i do zadnjeg indeksa 
      pomaknemo za jedno mjesto udesno, krenuvši sa zadnjim elementom
*/