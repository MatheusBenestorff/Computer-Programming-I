#include <stdio.h>


void main()
{
    float a, b, c;

    printf("Digite o comprimento do primeiro lado do trapezio: ");
    scanf("%f", &a);
    printf("Digite o comprimento do segundo lado paralelo ao primeiro: ");
    scanf("%f", &b);
    printf("Digite o comprimento da altura do trapezio: ");
    scanf("%f", &c);

    printf("Area do trapezio: %.2f", ((a + b)/2) * c);

}
