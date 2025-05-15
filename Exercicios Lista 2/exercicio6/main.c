#include <stdio.h>

void main()
{
    int n1, n2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("Maior valor: %d", n1);
    }
    if (n2 > n1) {
        printf("Maior valor: %d", n2);
    }
    if (n1 == n2) {
        printf("Dois numeros iguais foram informados");
    }


}
