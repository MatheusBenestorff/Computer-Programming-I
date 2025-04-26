#include <stdio.h>

void main()
{
    int a, b, c;
    float nro_termos, soma_termos;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a);
    printf("Digite o ultimo termo da PA: ");
    scanf("%d", &b);
    printf("Digite o razao da PA: ");
    scanf("%d", &c);

    nro_termos = (b - a) / c;
    soma_termos = ((a + b) / 2) * 6;

    printf("O resultado e: %.2f", soma_termos);


}
