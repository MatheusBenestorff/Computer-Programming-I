#include <stdio.h>

void main()
{
    int binario[64], numero, i, quociente, resto, tam = 0;

    printf("Digite o numero inteiro a ser convertido para Binario: ");
    scanf("%d", &numero);

    quociente = numero;

    do{
        resto = quociente % 2;
        quociente = quociente/2;

        binario[tam] = resto;
        tam++;
    }while(quociente > 0);

    printf("Numero %d em binario = ", numero);

    for(i = 0; i < tam; i++){
        //"tam - 1" para o loop não acessar uma posição inválida do vetor:
        printf("%d", binario[(tam-1)-i]);
    }
}
