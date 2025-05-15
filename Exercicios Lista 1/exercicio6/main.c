#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, potencia;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    potencia = pow(a, b);

    printf("A potencia e: %d", potencia);

}
