/* Program koji ucitava dva cijela broja a i b te ispisuje rezultat sljedecih usporedbi:
    - a < b
    - a >= b-2
    - a+6 != b-2
    - a%b == 0
*/

#include <stdio.h>

int main(void){
    int a, b;
    printf("Unesite dva cijela broja: ");
    scanf("%d %d", &a, &b);
    printf("%d < %d je %d\n", a, b, a < b);
    printf("%d >= %d-2 je %d\n", a, b, a >= b-2);
    printf("%d+6 != %d-2 je %d\n", a, b, a+6 != b-2);
    printf("%d%%%d == 0 je %d\n", a, b, a%b == 0);
    return 0;
}