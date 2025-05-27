#include <stdio.h>

void main()
{
    int i, valor, qtd;
    float media;

    for(i = 1, media = 0, qtd = 0; i <= 15; i++){
        printf("Digite o %do numero: ", i);
        scanf("%d", &valor);

        if(valor % 2 != 0){
            media = media + valor;
            qtd ++;
        }
    }

    printf("A media dos numeros impares informados e %.2f.", (media / qtd));
}
