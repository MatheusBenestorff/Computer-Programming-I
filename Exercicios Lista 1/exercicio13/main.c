#include <stdio.h>
#include <math.h>

void main()
{
    float r, pi, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    pi = 3.14159;

    area = pi * pow(r, 2);

    printf("A area do circulo e: %.2f", area);

}
