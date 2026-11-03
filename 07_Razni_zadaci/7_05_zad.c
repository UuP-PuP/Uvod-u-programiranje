/* Napisite program koji za unesene prirodne brojeve n i k racuna binomni koeficijent n povrh k.
   Podsjetnik (n povrh k) = n!/(k!(n-k)!) 
*/

#include <stdio.h>

int main(void){
    int n, k;
    unsigned int nazivnik = 1, brojnik = 1;
    printf("Unesite n i k: ");
    scanf("%d %d", &n, &k);
    if(n < 0 || k < 0 || k > n){
        printf("Neispravni podaci.\n");
        return 1;
    }
    int i;
    if(n-k < k){
        for(i=n; i>k; i--) brojnik *= i;
        for(i=1; i<=n-k; i++) nazivnik *= i;
    }else{
        for(i=n; i>n-k; i--) brojnik *= i;
        for(i=1; i<=k; i++) nazivnik *= i;
    }
    printf("%d povrh %d: %u", n, k, brojnik/nazivnik);
    return 0;
}

/* Napomene:
    - budući da faktorijele mogu biti velike vrijednosti, nije optimalno računati binomni koeficijent po definiciji
    - bolje je izraz n!/(k!(n-k)!) skratiti, čime dobivamo
        (n(*n-1)*...*(n+1))/((n-k)!)
                    ili
        (n(*n-1)*...*(n-k+1))/(k!)
     ovisno o tome je li k < n-k ili k>= n-k
*/
