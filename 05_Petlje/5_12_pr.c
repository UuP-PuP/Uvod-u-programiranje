#include <stdio.h>

    int main(void){
        double a, b;
        char op;
        printf("Unesite dva broja: ");
        scanf("%lf %lf", &a, &b);
        printf("Unesite aritmeticku operaciju: ");
        scanf(" %c", &op);
        switch(op){
            case '+': 
                printf("%f %c %f = %f\n", a, op, b, a+b);
                break;
            case '-': 
                printf("%f %c %f = %f\n", a, op, b, a-b);
                break;
            case '*': 
                printf("%f %c %f = %f\n", a, op, b, a*b);
                break;
            case '/': 
                if(b != 0)
                    printf("%f %c %f = %f\n", a, op, b, a/b);
                else
                    printf("Dijeljenje s 0 nije definirano!\n");
                break;
            default:
                printf("Uneseni znak ne predstavlja aritmeticku operaciju!\n");
        }
        return 0;
    }
