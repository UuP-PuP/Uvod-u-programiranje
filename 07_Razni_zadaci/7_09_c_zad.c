/* Napišite program koji unosi prirodan broj n te pomoću znaka * crta
   ispunjeni dijamant visine 2n+1. Primjerice, za n = 3, program crta
      *
     ***
    *****
   *******
    *****
     ***
      *
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    for(int i = 1; i <= n+1; ++i){ // trokut visine n+1
        for(int j = 1; j <= 2*(n+1); ++j){
            if(j >= n+2-i && j <= n+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(int i = n; i >= 1; --i){ // obrnuti trokut visine n
        for(int j = 1; j <= 2*n; ++j){
            if(j >= n+1-(i-1) && j <= n+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/* Napomene:
    - zadatak smo rijesili na nacin da smo prvo nacrtali ispiunjeni trokut visine n+1,
      a zatim smo nacrtali preokrenuti ispunjeni trokut visine n
*/
