/* Napisite program koji ucitava prirodni broj n 
   te ispisuje sve trojke prirodnih brojeva a, b i c koji se strogo manji od n 
   te je a^3 + b^3 > c^3. Svaku takvu trojku treba ispisati tocno jednom.
   Primjerice, vrijedi 1^3+2^3 > 1^3 i 2^3+1^3 > 1^3, 
   no treba ispisaoti samo jednu od ove dvije trojke (sami odaberite koju)
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Unesite prirodni broj: ");
    scanf("%d", &n);
    for(int a = 1; a < n; ++a){
        for(int b = a; b < n; ++b){
            for(int c = 1; c < n; ++c){
                if(a*a*a + b*b*b > c*c*c)
                    printf("%d^3 + %d^3 > %d^3\n", a,b,c);
                else
                    break;
            }
        }
    }
    return 0;    
}

/* Napomene:
    - ovo rjesenje ispisuje sve trojke (a,b,c) koje zadovoljavaju uvjet te je a <= b
    - ako bismo htjeli ispisati sve trojke (a,b,c) koje zadovoljavaju uvjet te je a > b,
      rjesenje bi bilo sljedece:
        for(int a = 1; a < n; ++a)
         for(int b = 1; b <= a; ++b)
            for(int c = 1; c < n; ++c)
                if(a*a*a + b*b*b > c*c*c)
                    printf("%d^3 + %d^3 > %d^3\n", a, b, c);
                else break;
    - Razlog za naredbu else break; u liniji 20 je sljedeci. 
      Buduci da varijabla c raste, kada prvi put dodemo do vrijednosti od c za koju
      vrijedi a^3 + b^3 <= c^3, tada ce to vrijediti i za svaku vecu vrijednost od c.
      Ispis programa bio bi isti kada ne bismo imali ovu naredbu.
*/
