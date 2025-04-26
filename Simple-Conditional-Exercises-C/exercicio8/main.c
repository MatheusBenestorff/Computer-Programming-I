#include <stdio.h>

void main()
{
    float n1, n2;

    printf("Digite o primeiro numero real: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &n2);

    if (n1 < n2) {
        printf("Valores em ordem crescente: %.2f e %.2f", n1, n2);
    }
    if (n2 < n1) {
        printf("Valores em ordem crescente: %.2f e %.2f", n2, n1);
    }

}
