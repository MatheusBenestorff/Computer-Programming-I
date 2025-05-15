#include <stdio.h>
#include <math.h>

void main()
{
    int n, a, b, c, d , e;

    printf("Digite um numero inteiro de ate 5 digitos: ");
    scanf("%d", &n);

    a = n % 10000;
    b = n % 1000;
    c = n % 100;
    d = n % 10;
    e = n % 1;

    printf("os numeros sao: %d", a);

}
