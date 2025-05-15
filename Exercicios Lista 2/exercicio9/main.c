#include <stdio.h>

void main()
{
    float n1, n2, subtracao;

    printf("Digite o primeiro numero real: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &n2);

    if (n1 < n2) {
        subtracao = n2 - n1;
        printf("%.2f - %.2f = %.2f", n2, n1, subtracao);
    }
    else {
        subtracao = n1 - n2;
        printf("%.2f - %.2f = %.2f", n1, n2, subtracao);
    }

}
