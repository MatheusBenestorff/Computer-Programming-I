#include <stdio.h>

void main()
{
    int valores[20], i, aux;

    for(i = 0; i < 20; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < 20; i++){
        if(i % 2 == 0){
            aux = valores[i];
            valores[i] = valores[i+1];
            valores[i+1] = aux;
        }
    }

    for(i= 0; i < 20; i++){
        printf("%d\n", valores[i]);
    }
}
