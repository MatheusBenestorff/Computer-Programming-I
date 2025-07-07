#include <stdio.h>

void main()
{
    int valores[10], i, aux;

    for(i= 0; i < 10; i++){
        printf("Digite o %do numero: ", i +1);
        scanf("%d", &valores[i]);
    }

    for(i= 0; i < 10; i++){
        printf("%d\n", valores[i]);
    }

    for(i = 0; i < 5; i++){
        aux = valores[i];
        valores[i] = valores[9-i];
        valores[9-i] = aux;
    }

    for(i= 0; i < 10; i++){
        printf("%d\n", valores[i]);
    }

}
