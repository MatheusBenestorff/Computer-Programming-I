#include <stdio.h>

void main()
{
    int i, qtd, j, aux;
    float valores[15];

    for(i = 0; i < 15; i++){
        printf("Digite o %do numero: ",i+1);
        scanf("%f", &valores[i]);
    }

    printf("\nDigite a quantidade de rotacoes para a esquerda do vetor: ");
    scanf("%d", &qtd);

    printf("\nVetor digitado:\n");

    for(i = 0; i < 15; i++){
        printf("%.2f ",valores[i]);
    }

    for(i = 0; i < qtd; i++){
        for(j = 0; j < 15; j++){
            if(j == 0){
                aux = valores[14];
                valores[14] = valores[0];
            }else if(j == 14){
                valores[13] = aux;
            }else{
                valores[j-1] = valores[j];
            }
        }
    }

    printf("\n\nVetor movido %d vez(es):\n", qtd);

    for(i = 0; i < 15; i++){
        printf("%.2f ",valores[i]);
    }

    printf("\n");


}
