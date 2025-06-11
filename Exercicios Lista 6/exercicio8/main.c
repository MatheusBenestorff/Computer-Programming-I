#include <stdio.h>

void main()
{
    int valores[10], i, div, primo, qtdPrimos = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &valores[i]);
    }
    printf("Numeros primos: \n");
    for(i = 0; i < 10; i++){
        for (div = 2, primo = 1; div < valores[i]; div ++){
            if (valores[i] % div == 0){
                primo = 0;
                break;
            }
        }

        if((valores[i] > 1)&&(primo == 1)){
            printf("%d\n", valores[i]);
            qtdPrimos++;
        }

    }

    printf("Foram informados %d numeros primos.", qtdPrimos);
}
