/* Napisite program koji za zadani n >= 2 ispisuje sve prirodne brojeve x, y> 1 za koje vrijedi x^2 + y^2 = n^2.
*/

#include <stdio.h>

int main(void){
    int n, x, y;
    printf("Unesite n: ");
    scanf("%d", &n);
    
    for(x = 2; x < n; x++) 
        for(y = 2; y < n; y++) 
            if(x*x+y*y == n*n) printf("%d^2 + %d^2 = %d^2\n", x, y, n);

    return 0;
}

/* Napomene:
    - Uocite da ce se ispisati oba para (x,y) i (y,x).
      Ako zelimo izbjeci ponavljanje, u unutarnjoj for petlji mozemo proci samo po y <= x (ili y >= x)
*/
