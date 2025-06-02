#include <stdio.h>

void main()
{
    int i, numero, menor, qtdMenor = 0;

    for(i = 1; i <= 20; i++){
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        if(i == 1){
            menor = numero;
            qtdMenor = 1;
        }
        if(numero == menor){
            qtdMenor++;
        }
        if(numero < menor){
            menor = numero;
            qtdMenor = 1;
        }
    }

    printf("O menor numero digitado foi: %d e este numero foi digitado %d vezes.", menor, qtdMenor);

}
