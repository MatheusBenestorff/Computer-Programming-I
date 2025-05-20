#include <stdio.h>

void main()
{
    int i, meses;
    float taxa = 1.12, valor, atual, anterior;

    printf("Digite o valor inicial: ");
    scanf("%f", &valor);
    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    for (i = 1; i <= (meses + 1); i++){
        if (i == 1){
            atual = valor;
        }
        else{
            atual = anterior * taxa;
        }
        printf("%do mes: Divida de %f\n", i -1, atual);
        anterior = atual;

    }
}
