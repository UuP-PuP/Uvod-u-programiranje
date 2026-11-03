// Napisite program koji ispisuje sve znamenke unesenog prirodnog broja krenuvsi sa najznacajnijom znamenkom.

#include <stdio.h>

int main(void){
    int n, djelitelj = 1;
    printf("Unesite prirodan broj: ");
    scanf("%d", &n);
    while(n / djelitelj >= 10) 
        djelitelj *= 10;
    while(djelitelj > 0){
        printf("%d\n", n/djelitelj);
        n %= djelitelj;
        djelitelj /= 10;
    }
    return 0;
}
