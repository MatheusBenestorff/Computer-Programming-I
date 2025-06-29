#include <stdio.h>

void main()
{
    int numeros[1001], i, div ;

    for(i = 0; i < 1001; i++){
        numeros[i] = 0;

        for(div = 2; div < i; div++){
            if(i % div == 0){
                numeros[i] = 1;
                break;
            }
        }
    }

    printf("Numeros primos segundo o crivo de Eratostenes:\n");
    for(i = 2; i < 1001; i++){
        if(numeros[i] == 0){
            printf("%d ", i);
        }
    }

}
