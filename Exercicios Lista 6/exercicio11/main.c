#include <stdio.h>

void main()
{
    int valores[10], i;
    float media = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);

        media = media + valores[i];
    }

    media = media / 10;

    printf("A media dos valores digitados e %.2f\n", media);
    printf("Valores acima da media: ");

    for(i = 0; i < 10; i++){
        if(valores[i] > media){
            printf("%d ", valores[i]);
        }
    }
}
