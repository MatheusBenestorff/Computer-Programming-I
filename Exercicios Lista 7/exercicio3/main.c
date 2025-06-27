#include <stdio.h>

void main()
{
    int valores[30], i, j, cont, menosVezes = 2, n;

    for(i = 0; i < 30; i ++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < 30; i++){
        cont = 0;
        for(j = 0; j < 30 j++){
            if(valores[i] == valores[j]){
                cont++;
            }
        }
        if(cont < menosVezes){
            menosVezes = cont;
            n = valores[i];
        }
    }
    printf("O numero %d aparece %d vezes.\n", n, menosVezes);

}
