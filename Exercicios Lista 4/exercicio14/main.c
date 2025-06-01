#include <stdio.h>

void main()
{
    int multiplicador, multiplicando, i, resultado;

    printf("Informe um numero inteiro correspondente ao valor do multiplicando: ");
    scanf("%d", &multiplicando);

    printf("Informe um numero inteiro correspondente ao valor do multiplicador: ");
    scanf("%d", &multiplicador);

    for (i = 1, resultado = 0; i <= multiplicador; i++){
        resultado += multiplicando;
    }

    printf("O resultado e %d", resultado);
}
