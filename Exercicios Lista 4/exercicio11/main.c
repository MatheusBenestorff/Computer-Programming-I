#include <stdio.h>

void main()
{
    int i, n, soma;

    for(i = 0, soma = 0; i < 15; i ++){
        printf("Digite o numero  %d: ", i+1);
        scanf("%d", &n);

        soma = soma + n;
    }

    printf("A soma dos numeros e: %d", soma);


}
