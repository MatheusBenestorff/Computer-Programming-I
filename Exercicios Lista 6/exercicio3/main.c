#include <stdio.h>

void main()
{
    int valores[10], i;

    for(i = 0; i< 10; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("Numeros pares: \n");

    for(i = 0; i < 10; i++){
        if(valores[i] % 2 == 0){
            printf("%d\n", valores[i]);
        }

    }

    printf("Numeros impares: \n");

    for(i = 0; i < 10; i++){
        if(valores[i] % 2 != 0){
            printf("%d\n", valores[i]);
        }

    }

}
