/* Napisite program koji ucitava prirodni broj n i priodni broj b (b >= 2). 
   Program ispisuje duljinu najduljeg uzastopnog niza istih znamenaka u zapisu broja n u bazi b.
   Primjerice, za uneseni broj n = 221 i b = 2, program ispisuje 3 jer je (221)_{10} = (11011101)_{2}, 
   a najdulji niz uzastopnih istih znamenaka je 111.
*/

#include <stdio.h>

int main(void){
    int n, b, max_dulj = 0, max_znam;
    scanf("%d %d", &n, &b);
    while(n > 0){
        int tren_znam = n%b;
        int duljina = 0;
        while(n%b == tren_znam){
            ++duljina;
            n/=b;
        }
        if(duljina > max_dulj){
            max_dulj = duljina;
            max_znam = tren_znam;
        }
    }
    printf("Duljina najduljeg niza uzastopnih istih znamenki je %d, znamenka je %d\n", max_dulj, max_znam);
    return 0;
}