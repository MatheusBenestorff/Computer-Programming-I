#include <stdio.h>

void main()
{
    int termo1, razao, i, sequencia[20], anterior;

    printf("Digite o valor do primeiro termo da P.A: ");
    scanf("%d", &termo1);

    printf("Digite o valor da razao da P.A: ");
    scanf("%d", &razao);

    for(i = 0; i < 20; i++){
        if(i == 0){
            sequencia[i] = termo1;
        }else{
            sequencia[i] = anterior + razao;
        }

        anterior = sequencia[i];
    }

    printf("Termos da sequencia: \n");
    for(i = 0; i < 20; i++){
        printf("%d ", sequencia[i]);
    }


}
