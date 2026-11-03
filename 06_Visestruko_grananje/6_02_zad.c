#include <stdio.h>

    int main(void){
        int n, pot = 1;
        printf("Unesite prirodan broj: ");
        scanf("%d", &n);
        for(int i = 1; i <= n; ++i) pot = (pot * 3) % 10;
        printf("Zadnja znamenka ");
        switch(pot % 10){
            case 2:
            case 3:
            case 5:
            case 7:
                printf("je ");
                break;
            default:
                printf("nije ");
        }
        printf("prost broj\n");
        return 0;
    }
