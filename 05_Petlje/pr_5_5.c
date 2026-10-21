#include <stdio.h>

int main(void){
    int n;
    long int fact = 1;
    printf("Unesite broj: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        fact *= i;
    printf("%d! = %ld", n, fact);
    return 0;
}
