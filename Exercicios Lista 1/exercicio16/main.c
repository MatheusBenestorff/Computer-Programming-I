#include <stdio.h>

void main()
{
    float a, b, c;

    printf("Digite o comprimento dos tres lados do triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    printf("Semiperimetro do triangulo: %.2f", (a + b+ c)/2);

}
