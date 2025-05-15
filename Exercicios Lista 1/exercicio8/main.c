#include <stdio.h>

void main()
{
    float a, b, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    a = a * 4;
    b = b * 6;

    media = (a + b) / 2;

    printf("O resultado e: %.2f", media);


}
