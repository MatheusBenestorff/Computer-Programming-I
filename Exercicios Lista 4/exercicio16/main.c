#include <stdio.h>

void main()
{
    int n, fat, i;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    for (fat = 1, i = 1; i <= n; i++){
        fat = fat * i;
    }

    printf("%d! = %d", n, fat);
}
