#include <stdio.h>

void main()
{
    int valores[20], i, j, cont, jaContei;

    for(i = 0; i < 20; i ++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < 20; i++){
        cont = 0;
        jaContei = 0;
        for(j = 0; j < 20; j++){
            if(valores[i] == valores[j]){
                cont++;
                if(j < i){
                    jaContei = 1;
                    break;
                }
            }
        }
        if(jaContei == 0){
            printf("O numero %d aparece %d vezes.\n", valores[i], cont);
        }
    }
}
