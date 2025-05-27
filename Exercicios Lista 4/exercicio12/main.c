#include <stdio.h>

void main()
{
    int i, valor, soma;

    for(i = 1, soma = 0; i <=15; i++){
        printf("Digite o %do numero inteiro: ", i);
        scanf("%d", &valor);

        if (valor % 2 == 0){
            soma = soma + valor;
        }
    }

    printf("A soma dos numeros pares e %d", soma);
}
