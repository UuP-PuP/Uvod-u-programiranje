/* Napišite program koji unosi prirodan broj n te pomoću znaka * crta
   znak X sirine i visine 2n+1. Primjerice, za n = 2, program crta
   *   *
    * *
     *
    * *
   *   *
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    for(int i = 0; i < 2*n+1; ++i){
        for(int j = 0; j < 2*n+1; ++j){
            if(j == i || j == 2*n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
