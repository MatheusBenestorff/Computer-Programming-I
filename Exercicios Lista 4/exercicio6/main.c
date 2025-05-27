#include <stdio.h>

void main()
{
    int n, valor, i;

    printf("Digite o numero de valores que devera ser solicitado: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Digite o %do valor inteiro: ", i);
        scanf("%d", &valor);

            if(valor % 2 != 0){
                printf("Numero impar.\n");
            }
    }
}
