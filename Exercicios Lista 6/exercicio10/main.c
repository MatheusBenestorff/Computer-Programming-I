#include <stdio.h>

void main()
{
    int valores[80], i, menor, indice;

    for(i = 0; i < 80; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);

        if(i == 0){
            menor = valores[0];
            indice = 0;
        }else if(valores[i] < menor){
            menor = valores[i];
            indice = i;
        }
    }

    printf("O menor elemento do vetor e %d e a sua posicao no vetor e %d.", menor, indice);


}
