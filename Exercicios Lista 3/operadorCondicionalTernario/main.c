#include <stdio.h>

void main()
{
//M�todo Arcaico:
//    int n;
//    printf("Digite um numero inteiro: ");
//    scanf("%d", &n);
//    if (n % 2 == 0 ){
//        printf("%d", n/2);
//    }
//    else{
//        printf("%d", (n+1)/2);
//    }

//M�todo do Operador Condicional Tern�rio:

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    n = (n % 2 == 0)? (n/2) : ((n+1) / 2);
    printf("%d", n);
}
