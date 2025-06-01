#include <stdio.h>

int main()
{
    int valor, menor, maior, i;

    for(i = 1; i <= 10; i++){
        printf("Digite o %do valor inteiro: ", i);
        scanf("%d", &valor);

        if(i == 1){
            menor = valor;
            maior = valor;
        }
        if(valor < menor){
            menor = valor;
        }
        if(valor > maior){
            maior = valor;
        }
    }
    printf("Menor valor informado: %d\n", menor);
    printf("Maior valor informado: %d", maior);
}
