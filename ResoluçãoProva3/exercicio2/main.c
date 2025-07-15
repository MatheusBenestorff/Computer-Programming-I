#include <stdio.h>

void main()
{
    float numeros[20], maior = 0, aux;
    int i, j, indiceMaior;

    for(i = 0; i < 20; i++){
        printf("Digite um numero real: ");
        scanf("%f", &numeros[i]);

        if((i == 0) || (numeros[i] > maior)){
            maior = numeros[i];
            indiceMaior = i;
        }
    }

    printf("Vetor original: \n");
    for(i = 0; i < 20; i++){
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    for(i = 0; i < 20; i++){
        if(indiceMaior == 19) break;

        for(j = 19; j >= 0; j--){
            if(j == 19){
                aux = numeros[0];
                numeros[0] = numeros[19];
            }else if(j == 0){
                numeros[1] = aux;
            }else{
                numeros[j+1] = numeros[j];
            }
        }

        indiceMaior++;

        for(j = 0; j < 20; j++){
            printf("%.2f ", numeros[j]);
        }
        printf("\n");
    }
}
