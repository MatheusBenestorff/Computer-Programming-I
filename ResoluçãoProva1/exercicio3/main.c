#include <stdio.h>

void main()
{
    int di, mi, ai, da, ma, aa, anos;
    float valor;

    printf("Digite a data inicial: ");
    scanf("%d%d%d",&di,&mi,&ai);
    printf("Digite a data atual: ");
    scanf("%d%d%d",&da,&ma,&aa);
    printf("Digite o valor da mensalidade: ");
    scanf("%f",&valor);

    //Verificação da quantidade de anos:
    anos = aa - ai;

    if(ma < mi){
        anos = anos - 1;
    }
    if((ma == mi) && (da < di)){
        anos = anos - 1;
    }

    //Cálculo do valor a ser pago:
    if (anos < 2){
        printf("Valor = %f", valor);
    }
    else{
        if (anos < 4){
            printf("Valor = %f", valor * 0.95);
        }
        else{
            if (anos < 6){
                printf("Valor = %f", valor * 0.90);
            }
            else{
                printf("Valor = %f", valor * 0.85);
            }
        }
    }


}
