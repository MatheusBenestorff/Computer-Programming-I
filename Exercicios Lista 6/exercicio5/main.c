#include <stdio.h>

void main()
{
    int valores[10], i, div, primo;

    for(i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Posicoes do vetor que possuem numeros primos: \n");

    for(i = 0; i < 10; i++){
        for (div = 2, primo = 1; div < valores[i]; div ++){
            if (valores [i] % div == 0){
                primo = 0;
                break;
            }

        }

        if(primo == 1 && valores[i] > 1){
            printf("%d\n", i);
        }

    }
}
