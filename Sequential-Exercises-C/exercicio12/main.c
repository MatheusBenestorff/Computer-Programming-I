#include <stdio.h>
#include <math.h>

void main()
{
    float a, volume, area;

    printf("Digite a aresta do cubo: ");
    scanf("%f", &a);

    volume = pow(a, 3);
    area =  6 * pow(a, 2);

    printf("O volume do cubo e: %.2f \n", volume);
    printf("A area do cubo e: %2.f", area);

}
