/* Napisite program koji učitava prirodne brojeve n i m. 
   Zatim ucitava dvije matrice cijelih brojeva dimenzija nxm te ispisuje njihov zbroj.
*/

#include <stdio.h>

int main(void){
    int n, m;
    printf("Unesite dva prirodna broja: ");
    scanf("%d %d", &n, &m);
    double a[n][m], b[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            printf("Unesite a[%d][%d]: ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            printf("Unesite b[%d][%d]: ", i, j);
            scanf("%lf", &b[i][j]);
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            printf("%-6.2f ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

/* Napomene:
     - Matricu ucitavamo po retcima (prvo ucitamo sve elemente nultog reda, zatim sve elemente prvog reda itd.)
     - Stoga imamo dvije for petlje: petlja po i prolazi po retcima, dok petlja j prolazi po stupcima
     - Matrice zbrajamo "po komponentama"
     - Formalnije, zbroj matrica A i B dimenzija nxm je matrica C dimenzija nxm takva da je C[i][j] = A[i][j] + B[i][j]
*/