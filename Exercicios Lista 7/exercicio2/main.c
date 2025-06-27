#include <stdio.h>

void main()
{
    int valores[5], i, j, cont, jaContei, maisVezes = 0, n;

    for(i = 0; i < 5; i ++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < 5; i++){
        cont = 0;
        for(j = 0; j < 5; j++){
            if(valores[i] == valores[j]){
                cont++;
            }
        }
        if(cont > maisVezes){
            maisVezes = cont;
            n = valores[i];
        }
    }
    printf("O numero %d aparece %d vezes.\n", n, maisVezes);

}
