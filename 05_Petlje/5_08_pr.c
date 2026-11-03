/* Napisite program koji za ucitani n > 1 ispisuje sljedece: \\
     1
     22
     333
     ...
     nnn ... n
*/

#include <stdio.h>

int main(void){
    int n, i, j;
    printf("Unesite n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}
