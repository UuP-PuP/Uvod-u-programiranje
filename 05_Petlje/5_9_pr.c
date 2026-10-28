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
