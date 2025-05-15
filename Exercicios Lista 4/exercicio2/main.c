#include <stdio.h>


void main()
{
    int n, cont;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (cont = 1; cont <= n; cont++){
        printf("%d\n", cont);
    }

}
