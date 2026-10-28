#include <stdio.h>

int main(void){
    int x, max_ind = 0, i = 0, max_broj = 0;
    long long max_aps = 0;
    while(1){
        scanf("%d", &x);
        if(x == 0) break;
        ++i;
        long long aps = x < 0 ? -(long long)x : (long long)x;
        if(aps >= max_aps){
            max_aps = aps;
            max_ind = i;
            max_broj = x;
        }
    }
    if(i > 0) printf("Broj %d ima najveću apsolutnu vrijednost, indeks: %d\n", max_broj, max_ind);
    else printf("Nije unesen nijedan broj različit od nule.\n");
    return 0;
}
