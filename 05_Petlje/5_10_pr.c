/* Napisite program koji za unesene prirodne brojeve a < b ispisuje sve prirodne brojeve iz intervala [a,b]
   koji su potpuni kvadrati. Za x kazemo da je potpuni kvadrat ako postoji y takav da je x = y^2.

*/

#include <stdio.h>

int main(void){
    int a, b, i, j;
    printf("Unesite a i b: ");
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++){
        int potpun = 0;
        for(j = 1; j*j <= i; j++)
            if(j*j == i){
                potpun = 1; 
                break;
            }
        if(potpun) printf("%d ", i);
    }
    return 0;
}

/* Napomene:
    - Uočimo da se break odnosi samo na najblizu petlju u kojoj se nalazi (u ovom slučaju j-petlju). Analogno vrijedi i za continue.
*/