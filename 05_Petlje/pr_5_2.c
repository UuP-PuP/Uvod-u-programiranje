#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodni broj: ");
    scanf("%d", &n);
    printf("Znamenke broja %d su:\n", n);
    while(n > 0){
        printf("%d\n", n%10);
        n /= 10;
    }
    return 0;
}