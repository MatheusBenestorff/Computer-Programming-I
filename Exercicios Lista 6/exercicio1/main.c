#include <stdio.h>

void main()
{
    int valores[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Valores digitados: \n");

    for(i = 0; i < 10; i++){
        printf("%d\n", valores[i]);
    }

}

