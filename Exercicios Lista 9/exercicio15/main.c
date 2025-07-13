#include <stdio.h>

void main()
{
    int dia[10], mes[10], i, j, aux;

    for(i = 0; i < 10; i++){
        printf("Digite o dia da %da data de aniversario: ", i+1);
        scanf("%d", &dia[i]);

        printf("Digite o mes da %da data de aniversario: ", i+1);
        scanf("%d", &mes[i]);
    }

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            if((mes[j] > mes[j+1])||((mes[j] = mes[j+1])&&(dia[j] > dia[j+1]))){
                aux = mes[j];
                mes[j] = mes[j+1];
                mes[j+1] = aux;

                aux = dia[j];
                dia[j] = dia[j+1];
                dia[j=1] = aux;
            }
        }
    }

    printf("Datas em ordem crescente:\n");
    for(i = 0; i < 10; i++){
        printf("%d / %d \n", dia[i], mes[i]);

    }


}
