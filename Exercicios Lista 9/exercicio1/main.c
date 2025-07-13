#include <stdio.h>

void main()
{
    int valores[10], i, j, aux;

    for(j = 0; j < 10; j++){
        printf("Digite o %do numero: ", j+1);
        scanf("%d", &valores[j]);
    }

    //Método Bubble Sort
    for(i = 0; i < 10-1; i++){
        for(j = 0; j < 10-1; j++){
            if(valores[j] > valores[j+1]){
                aux = valores[j];
                valores[j] = valores[j+1];
                valores[j+1] = aux;
            }
        }
    }

    for(j = 0; j < 10; j++){
        printf("%d\n", valores[j]);
    }
}
