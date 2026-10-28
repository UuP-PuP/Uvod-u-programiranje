#include <stdio.h>

int main(void){
    int n, i;
    printf("Unesite cijeli broj: ");
    scanf("%d", &n);
    for(i = n - 1; i > 0; --i){
        //provjera relativne prostosti
        int d;
        for(d = 2; d <= i; ++d)
            if(n%d == 0 && i%d == 0) // nasli smo zajednickog djelitelja
                break;
        if(d == i+1) // znaci da je for petlja dosla do kraja (bez da smo koristili break)
            printf("%d\n", i);
    }
    return 0;
}
