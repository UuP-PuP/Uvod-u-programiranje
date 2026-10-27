// Napisite program koji ispisuje sve znamenke unesenog prirodnog broja krenuvsi sa znamenkom jedinice.

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

/* NAPOMENA:
    - moramo se pobrinuti da petlja u nekom trenutku stvarno stane, inače program nikad ne stane
    - na Linuxu i WSL-u "beskonačni" program možemo zaustaviti sa CTRL+C
    - petlja je "unistila" varijablu n (nakon petlje vrijednost od n je 0). Ako zelimo koristiti originalnu vrijednost od n nakon petlje, moramo prije ulaska u petlju spremiti vrijedenost od n u novu varijablu
*/