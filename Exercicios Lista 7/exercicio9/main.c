#include <stdio.h>

void main()
{
    int positivos[10], i, cont = 0, numero;

    do{
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

        if(numero > 0){
            positivos[cont] = numero;
            cont++;
        }
    }while(cont < 10);

    printf("Vetor na ordem contraria:\n");

    for(i = 0; i < 10; i++){
        printf("%d ", positivos[9-i]);
    }
}
