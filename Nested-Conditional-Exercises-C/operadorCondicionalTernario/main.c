#include <stdio.h>

void main()
{
//Método Arcaico:
//    int n;
//    printf("Digite um numero inteiro: ");
//    scanf("%d", &n);
//    if (n % 2 == 0 ){
//        printf("%d", n/2);
//    }
//    else{
//        printf("%d", (n+1)/2);
//    }

//Método do Operador Condicional Ternário:

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    n = (n % 2 == 0)? (n/2) : ((n+1) / 2);
    printf("%d", n);
}
