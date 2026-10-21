#include <stdio.h>

int main(void){
    int n, i;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    int prost = 1;
    for(i=2; i<n; i++)
        if(n%i==0) {
            prost = 0;
            break;
        }
    if(prost && n > 1) printf("%d je prost", n);
    else printf("%d nije prost broj");
    return 0;
}
