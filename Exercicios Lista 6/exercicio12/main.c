#include <stdio.h>


void main()
{
    int i;
    float media = 0, valores[15], menor = 0;

    for(i = 0; i < 15; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
        media = media + valores[i];
    }

    media = media / 15;
    printf("A media dos valores informados e %.2f\n", media);

    for(i = 0; i < 15; i++){
        if(valores[i] > media){
            if(menor == 0){
                menor = valores[i];
            }else if(valores[i] < menor){
                menor = valores[i];
            }
        }
    }

    printf("O menor numero maior que a media e %.2f.", menor);


}
