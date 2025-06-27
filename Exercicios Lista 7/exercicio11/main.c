#include <stdio.h>

void main()
{
    int primos[20], i, div = 2, cont = 0, numero = 2, primo;

    do{
        for (div = 2, primo = 1; div < numero; div ++){
            if (numero % div == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            primos[cont] = numero;
            cont++;
        }

        numero++;

    }while(cont < 20);

    printf("Primeiros 20 numeros primos:\n");

    for(i = 0; i < 20; i++){
        printf("%d ", primos[i]);
    }


}
