#include <stdio.h>

int main(void){
    int a, b, i, j;
    printf("Unesite a i b: ");
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++){
        int potpun = 0;
        for(j = 1; j*j <= i; j++)
            if(j*j == i){
                potpun = 1; 
                break;
            }
        if(potpun) printf("%d ", i);
    }
    return 0;
}
