#include <stdio.h>

void main()
{
    int valores[50], i, maior = 0;

    for(i = 0; i < 50; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < 50; i++){

        if(valores[i] > maior){
            maior = valores[i];
        }

    }

    printf("O maior valor informado foi %d", maior);


}
