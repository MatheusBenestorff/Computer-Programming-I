#include <stdio.h>

void main()
{
    int valor, menor, i;

    valor = 1;
    i = 1;
    menor = 0;
    while(valor != 0){
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if(valor > 0 ){
            if(i == 1){
                menor = valor;
                menor = valor;
                i++;
            }
            if(valor < menor){
                menor = valor;
            }
        }
    }
    if(menor > 0){
        printf("O menor numero informado e: %d", menor);
    }
}
