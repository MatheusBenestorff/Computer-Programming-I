#include <stdio.h>

void main()
{
    int valor;

    do{
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if((valor > 0) && (valor % 2 == 0)){
            printf("Numero par.\n");
        }
    } while(valor >= 0);
}
