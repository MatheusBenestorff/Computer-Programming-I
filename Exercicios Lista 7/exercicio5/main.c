#include <stdio.h>

void main()
{
    int valores[25], i, nota;

    for(i = 0; i < 25; i++){
        do{
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &valores[i]);
        }while((valores[i] < 0)||(valores[i] > 10));
    }

    for(nota = 0; nota < 11;  nota++){
        printf("%d ", nota);
        for(i = 0; i < 25; i++){
            if(nota == valores[i]){
                printf("*");
            }
        }
        printf("\n");
    }
}
