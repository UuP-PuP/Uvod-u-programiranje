#include <stdio.h>

int main(void){
    int x, sum = 0, n = 0;
    while(1){
        printf("Unesite broj: ");
        scanf("%d", &x);
        if(x == 0) break;
        if(x%2 == 0) continue;
        sum += x;
        n++;
    }
    if(n == 0) printf("Nije ucitan nijedan neparan broj!");
    else printf("Prosjek je %f", (double)sum/n);
    return 0;
}
