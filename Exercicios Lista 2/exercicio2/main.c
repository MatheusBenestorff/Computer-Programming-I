#include <stdio.h>

void main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n >= 0){
        printf("%d e um numero positivo", n);
    }
    else{
        printf("%d e um numero negativo", n);
    }


}
