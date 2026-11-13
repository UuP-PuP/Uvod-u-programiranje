/* Napisite program koji ucitava prirodni broj n. 
   Zatim ucitava kvadratnu matricu cijelih brojeva dimenzije nxn. 
   Program ispisuje sumu elemenata na glavnoj i na sporednoj dijagonali.
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodni broj: ");
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            printf("Unesite a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum_glavna = 0, sum_sporedna = 0;

    for(int i = 0; i < n; ++i){
        sum_glavna += a[i][i];
        sum_sporedna += a[i][n-1-i];
    }

    printf("Suma elemenata na glavnoj dijagonali je %d, a suma elemenata na sporednoj dijagonali je %d\n", sum_glavna, sum_sporedna);
    return 0;
}

/* Napomene:
    - Elementi na glavnoj dijagonali nalaze se na poziciji (i,i), dok se elementi na sporednoj dijagonali nalaze na poziciji (i, n-1-i)
    - Stoga mozemo sume izracunati u jednoj for petlji.
*/