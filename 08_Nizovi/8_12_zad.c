/* Napisite program koji ucitava prirodne brojeve n i m te matricu cijelih brojeva dimenzija n x m. 
   Program ispisuje umnozak ne-nul elemenata u svakom stupcu.
*/

#include <stdio.h>

int main(void){
    int n, m;
    printf("Unesite dva prirodna broja: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            printf("Unesite a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int j = 0; j < m; ++j){
        int prod = 1;
        for(int i = 0; i < n; ++i){
            if(a[i][j]) prod *= a[i][j];
        }
        printf("Umnozak ne-nul elemenata u stupcu %d je %d\n", j, prod);
    }

    return 0;
}

/* Napomene:
    - Nakon sto ucitamo matricu, moramo proci po svim stupcima te izracunati umnožak svih ne-nul elemenata
    - Vanjska for petlja prolazi po stupcima i zato ide do m. Unutarnja for petlja prolazi po retcima i zato ide do n
*/