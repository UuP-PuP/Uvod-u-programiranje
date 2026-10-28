/*
    Istrazite cemu sluze \t, \r i \a.
*/

#include <stdio.h>

int main(void){
    printf("Hello\nworld\n"); // \n služi za prelazak u novi red
    printf("\tHello,\tworld\n"); // \t služi za umetanje taba (velikog razmaka, tipka Tab na tipkovnici)
    printf("\a"); // \a odsvira neki zvuk
    printf("Helloooooo,\rworld\n"); // \r vraća kursor na početak, tj. briše sve što se nalazi ispred \r i napiše sve što se nalazi nakon \r
    return 0;
}