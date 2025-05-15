#include <stdio.h>

void main()
{
    int n1, n2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    if ((n1 % n2 == 0) || (n2 % n1 == 0)) {
        printf("Sao multiplos");
    }
    else{
        printf("Nao sao multiplos");
    }


}
