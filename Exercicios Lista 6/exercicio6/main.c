#include <stdio.h>
#include <stdlib.h>


void main()
{
    int valores[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("Vetor Modificado: \n");

    for(i = 0; i < 10; i++){
        if(valores[i] < 0){
            valores[i] = abs(valores[i]);
        }

        printf("%d\n", valores[i]);

    }
}
