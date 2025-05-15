#include <stdio.h>
#include <math.h>

void main()
{
    int n, area;

    printf("Digite o lado do quadrado: ");
    scanf("%d", &n);

    area = pow(n, 2);

    printf("A area do quadrado e: %d", area);

}
