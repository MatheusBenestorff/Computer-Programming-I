#include <stdio.h>

void main()
{
    int valores[10], i, negativos = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("Vetor digitado: \n");

    for(i = 0; i < 10; i++){
        printf("%d\n", valores[i]);

        if(valores[i] < 0){
            negativos++;
        }
    }

    printf("Foram informados %d numeros negativos.", negativos);
}
