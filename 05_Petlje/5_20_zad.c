#include <stdio.h>

int main(void){
    int b;
    printf("Unesite bazu: ");
    scanf("%d", &b);
    int n;
    while(1){
        printf("Unesite prirodni broj: ");
        scanf("%d", &n);
        if(!n) break;
        int zbroj = 0, n_kopija = n;
        while(n > 0){
            zbroj += n%b;
            n /= b;
        }
        printf("Zbroj znamenaka broja %d u bazi %d je %d\n", n_kopija, b, zbroj);
    }
    return 0;
}
