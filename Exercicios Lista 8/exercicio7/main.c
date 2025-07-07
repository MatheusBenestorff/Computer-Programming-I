#include <stdio.h>

void main()
{
    float valores[10], media, aux, valor;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%f", &valores[i]);
    }

    do{
        media = 0;
        printf("Digite o novo valor: ");
        scanf("%f", &valor);

        for(i = 0; i < 10; i++){
            if(i == 0){
                aux = valores[9];
                valores[9] = valor;
            }else if(i == 9){
                valores[9-1] = aux;
            }else{
                valores[i-1] = valores[i];
            }
        }
        printf("Novo vetor: \n");
        for(i = 0; i < 10; i++){
            printf("%.2f ", valores[i]);
            media = media + valores[i];
        }
        printf("\nMedia = %.2f\n", media/10);
    }while(valor >= 0);
}
