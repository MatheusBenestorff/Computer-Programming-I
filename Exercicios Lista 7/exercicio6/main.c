#include <stdio.h>

void main()
{
    int notas[1000], i, notaDigitada, cont, nota, tam = 0;

    for(i = 0; i < 1000; i++){
        printf("Digite a nota de um aluno: ");
        scanf("%d", &notaDigitada);

        if((notaDigitada >= 0)&&(notaDigitada <= 10)){
            notas[i] = notaDigitada;
            tam++;
        }
        else if(notaDigitada < 0){
            break;
        }
    }


    for(nota = 0; nota < 11;  nota++){
        cont = 0;
        for(i = 0; i < tam; i++){
            if(nota == notas[i]){
                cont++;
            }
        }
        if(cont > 0){
            printf("Nota %d: %d ocorrência(s).\n", nota, cont);

        }
    }
}
