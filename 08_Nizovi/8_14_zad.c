/* Napisite program koji ucitava niz cjelobrojnih kvadratnih matrica dimenzija nxn dok se ne ucita 10 matrica 
   ili nul-matrica (koja je dio niza). Program ispisuje matrice koje imaju najmanju medusobnu udaljenost, 
   a nalaze se na razlicitim indeksima. 
*/

#include <stdio.h>
#include <math.h>

int main(void){
    int a[10][3][3];
    int n = 0, prvi = 1;
    double min_dist;
    int min_i, min_j;
    while(n < 10){
        int nul_matrica = 1;
        for(int i = 0; i < 3; ++i){
            for(int j = 0; j < 3; ++j){
                printf("Unesite element na poziciji (%d, %d): ", i, j);
                scanf("%d", &a[n][i][j]);
                if(a[n][i][j]) nul_matrica = 0;
            }
        }
        ++n;
        if(nul_matrica)
            break;
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i; ++j){
            double dist = 0;
            for(int k = 0; k < 3; ++k){
                for(int l = 0; l < 3; ++l){
                    dist += (a[i][k][l] - a[j][k][l])*(a[i][k][l] - a[j][k][l]);
                }
            }
            dist = sqrt(dist);
            if(prvi || dist <= min_dist){
                prvi = 0;
                min_dist = dist;
                min_i = i; 
                min_j = j;
            }
        }
    }
    if(n < 2){
        printf("Nije uneseno dovoljno matrica!\n");
        return 0;
    }
    printf("Najmanja udaljenost je %.2f izmedju matrica na indeksima %d i %d\n", min_dist, min_i, min_j);
    printf("To su sljedece matrice:\n");
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            printf("%5d ", a[min_i][i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            printf("%5d ", a[min_j][i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

/* Napomene:
    - Ucitane matrice spremamo u trodimenzionalni niz a
    - Zatim racunamo udaljenost izmedu svake dvije matrice u nizu. Zbog toga nam trebaju dvije for petlje.
    - Primijetimo da je dist(A,B) = dist(B,A). Da bismo izbjegli duplo racunanje 
      te da bismo izbjegli racunanje udaljenost matrice od same sebe (sto uvijek iznosi 0), unutarnja for petlja ide do i
    - Dakle, uvijek racunamo udaljenost matrica a[i] i a[j] takvih da je j < i
    - Za racunanje korijena koristili smo funkciju sqrt iz zaglavlja math.h koje smo ukljucili na pocetku programa
    - Buduci da trazimo najmanju udaljenost, varijablu min_dist ne mozemo odmah inicijalizirati jer udaljenost moze biti proizvoljno velika.
      Stoga u min_dist prvo spremamo udaljenost prve dvije matrice u nizu.
    - Kako bismo na kraju mogli ispisati matrice, moramo pamtiti indekse matrica cija medusobna udaljenost je najmanja. 
      Te indekse pamtimo u varijablama min_i i min_j
*/