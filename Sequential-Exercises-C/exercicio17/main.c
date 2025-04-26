#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, s;

    printf("Digite o comprimento dos tres lados do triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) /2;

    printf("Area do triangulo formado: %.2f", sqrtf(s*(s-a)*(s-b)*(s-c)));

}
