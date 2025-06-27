#include <stdio.h>

int main()
{
    int impares[20], i, cont = 0, inteiro;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &inteiro);

        if(inteiro % 2 != 0){
            impares[cont] = inteiro;
            cont++;
        }

    }while(cont < 20);

    for(i = 0; i < 20; i++){
        printf("%d ", impares[i]);
    }


}
