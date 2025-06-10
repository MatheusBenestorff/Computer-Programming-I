#include <stdio.h>

void main()
{
    int mes;
    float val;

    do{
        printf("Digite o mes: ");
        scanf("%d", &mes);
    }while((mes < 1)|| (mes > 12));
    do{
        printf("Digite o valor da divida: ");
        scanf("%f", &val);
    }while ((val <= 0)||(val > 10000));

    printf("Mes = %d, divida = %.2f.\n", mes, val);

    while(val <= 10000){
        mes = mes + 1;
        if(mes == 13) mes = 1;
        val = val + 0.1 * val;
        printf("Mes = %d, divida = %.2f.\n", mes, val);
    }

}
