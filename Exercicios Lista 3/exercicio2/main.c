#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &c);

    if (a < b){
        if (a < c){
            printf("Menor valor valor: %d", a);
        }
        else{
            printf("Menor valor: %d", c);
        }
    }
    else{
        if (b < c){
            printf("Menor valor: %d", b);
        }
        else{
            printf("Menor valor: %d", c);
        }
    }

}
