#include <stdio.h>

void main()
{
    float numeros[6], maior, aux;
    int i, j, indiceMaior;

    for(i = 0; i < 6; i++){
        printf("Digite o %do numero real: ", i+1);
        scanf("%f", &numeros[i]);

        if(i == 0){
            maior = numeros[i];
            indiceMaior = i;
        }else{
            if(numeros[i] > maior){
                maior = numeros[i];
                indiceMaior = i;
            }
        }
    }
    printf("\nValores Informados: \n");
    for(j = 0; j < 6; j++){
            printf("%.2f ", numeros[j]);
        }

    for(i = 0; i < 6; i++){
        if(indiceMaior == 0) break;
        for(j = 0; j < 6; j++){
            if(j == 0){
                aux = numeros[5];
                numeros[5] = numeros[0];
            }else if(j == 5){
                numeros[4] = aux;
            }else{
                numeros[j-1] = numeros[j];
            }
        }

        indiceMaior--;
        printf("\nDeslocamento %d\n", i+1);

        for(j = 0; j < 6; j++){
            printf("%.2f ", numeros[j]);
        }
    }
}
