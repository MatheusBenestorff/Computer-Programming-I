#include <stdio.h>

void main()
{
    int valor, i, intervalo1, intervalo2, intervalo3, intervalo4;
    intervalo1 = 0;
    intervalo2 = 0;
    intervalo3 = 0;
    intervalo4 = 0;

    for(i= 1; i <= 15; i++){
        printf("Informe um valor inteiro: ");
        scanf("%d", &valor);

        if (valor >= 0){
            if (valor <= 25) {
                intervalo1++;
            } else if (valor <= 50) {
                intervalo2++;
            } else if (valor <= 75) {
                intervalo3++;
            } else if (valor <= 100) {
                intervalo4++;
            }
        }

    }
    printf("Foram informados %d valores no intervalo [0,25].\n", intervalo1);
    printf("Foram informados %d valores no intervalo (25,50].\n", intervalo2);
    printf("Foram informados %d valores no intervalo (50,75].\n", intervalo3);
    printf("Foram informados %d valores no intervalo (75,100].\n", intervalo4);
}
