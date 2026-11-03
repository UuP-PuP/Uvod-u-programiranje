/* Napišite program koji unosi prirodan broj n te pomoću znaka * crta
   ispunjeni trokut visine n. Primjerice, za n = 5, program crta
       *
      ***
     *****
    *******
   *********
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= 2*n; ++j){
            if(j >= n+1-i && j <= n-1+i) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}