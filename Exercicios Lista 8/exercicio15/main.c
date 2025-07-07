#include <stdio.h>

void main()
{
    int numeros[10], i;
    float soma = 0, porcento[10];

    for(i = 0; i < 10; i++){
        printf("Digite o %do numero inteiro: ", i+1);
        scanf("%d", &numeros[i]);

        soma = soma + numeros[i];
    }
    printf("O total de amostras foi de %.2f\n", soma);
    printf("Porcentagem de cada numero em relacao ao total: \n");
    for(i = 0; i < 10; i++){
        porcento[i] = (numeros[i]/soma) * 100;

        printf("%.2f ", porcento[i]);
    }

}
