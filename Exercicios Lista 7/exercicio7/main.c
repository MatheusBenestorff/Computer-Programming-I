#include <stdio.h>

void main()
{
    int numeros[1000], i, tam = 0, cont, numeroDigitado, numero;

    for(i = 0; i < 1000; i++){
        printf("Digite um numero inteiro entre 1 e 10: ");
        scanf("%d", &numeroDigitado);

        if((numeroDigitado >= 1)&&(numeroDigitado <= 10)){
            tam++;
            numeros[i] = numeroDigitado;
        }
        if(numeroDigitado == 0){
            break;
        }
    }
    printf("Numeros que nao foram digitados nenhuma vez: ");

    for(numero = 1; numero < 11; numero++){
        cont = 0;
        for(i = 0; i < tam; i++){
            if(numero == numeros[i]){
                cont++;
            }
        }
        if(cont == 0){
            printf("%d ", numero);
        }
    }
}
