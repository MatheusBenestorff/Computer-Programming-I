#include <stdio.h>

void main()
{
    int n;

    printf("Digite um numero inteiro diferente de 0: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("o numero %d e par", n);
    }
    else{
        printf("o numero %d e impar", n);
    }


}
