#include <stdio.h>

void main()
{
    int a, b;
    float divisao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    /* Casting de vari�veis */
    divisao = (float)a / b;

    printf("A divisao e: %.2f", divisao);

}
