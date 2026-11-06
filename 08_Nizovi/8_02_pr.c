/* Sto ispisuje sljedeci kod?
*/

#include <stdio.h>

int main(void){
    int n = 4, a[4], i = 0;
    for(i = 0; i < n; ++i)
        a[i] = 2*i;
    for(i = 0; i < n-1; ++i){
        printf("%d ", a[++i]);
        printf("%d\n", a[i--]);
    } 
    return 0;
}

/* Ispis je
    2 2
    4 4
    6 6 
*/