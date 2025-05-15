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

    if (a > b){
        if (a > c){
            printf("Maior valor: %d", a);
        }
        else{
            printf("Maior valor: %d", c);
        }
    }
    else{
        if (b > c){
            printf("Maior valor: %d", b);
        }
        else{
            printf("Maior valor: %d", c);
        }
    }

}
