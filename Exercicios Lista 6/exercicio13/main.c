#include <stdio.h>

void main()
{
    int valores[6], i, somaPares = 0, qtdImpar = 0;

    for(i = 0; i < 6; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Os numeros pares sao: \n");

    for(i = 0; i < 6; i++){
        if(valores[i] % 2 == 0){
            printf("Numero %d posicao %d.\n", valores[i], i);
            somaPares = somaPares + valores[i];
        }
    }

    printf("Soma dos pares  = %d\n", somaPares);

    printf("Os numeros impares sao: \n");

    for(i = 0; i < 6; i++){
        if(valores[i] % 2 != 0){
            printf("Numero %d posicao %d.\n", valores[i], i);
            qtdImpar ++;
        }
    }

    printf("Quantidade dos impares = %d\n", qtdImpar);




}
