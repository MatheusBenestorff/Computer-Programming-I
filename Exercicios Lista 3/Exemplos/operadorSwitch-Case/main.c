#include <stdio.h>

void main()
{
    int opcao;
    float valor;

    printf("Escolha uma opcao:\n1-Converter C para F. \n2-Converter de km para milhas. \n3-Converter de horas para minutos. \n");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);


    switch(opcao){
    case 1:
        printf("%.2f C equivale a %.2f F. \n", valor, valor*(9/5)+32);
        break;
    case 2:
        printf("%.2f km equivale a %.2f milhas. \n", valor, valor*0.621371);
        break;
    case 3:
        printf("%.2f H equivale a %.2f min. \n", valor, valor*60);
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
}
