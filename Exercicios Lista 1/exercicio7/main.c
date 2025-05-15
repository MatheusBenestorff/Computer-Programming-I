#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    resultado = pow((a - b), 2);

    printf("A potencia e: %d", resultado);

}
