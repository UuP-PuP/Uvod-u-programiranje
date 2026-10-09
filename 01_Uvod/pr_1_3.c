// Sto ispisuje sljedeci kod?

#include <stdio.h>

int main(void){
    printf("Hello");
    printf("world");
    return 0;
}

/*
    Kod ispisuje Helloworld. Funkcija printf nastavlja gdje je kursor stao (nema automatskog prelaska u novi red).
    ASAko želimo skociti u novi red, moramo koristiti \n: printf("Hello\nworld");
*/