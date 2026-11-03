/* Napisite program koji za unesene prirodne brojeve a < b 
   ispisuje prvi (najmanji) potpuni kvadrat u intervalu [a,b]. 
   Ako takvog nema, treba ispisati poruku
*/

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Unesite brojeve a i b: ");
    scanf("%d %d", &a, &b);
    int potpun = 0;
    for(int i = a; i <= b; ++i){
        for(int j = 1; j*j <= i; ++j){
            if(j*j == i){ // i je potpuni kvadrat
                potpun = 1;
                break; // odnosi se samo na jednu petlju (po j)
            }
        }
        if(potpun == 1){
            printf("%d je najmanji potpuni kvadrat\n", i);
            break; // odnosi se na petlju po i
        }    
    }
    if(potpun == 0) printf("Nema potpunih kvadrata\n");
    return 0;
}
