#include <stdio.h>

void main()
{
    int primos[10], i, div = 2, cont = 0, numero = 100, primo;

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

    }while(cont < 10);

    printf("Primeiros 10 numeros primos acima de 100:\n");

    for(i = 0; i < 10; i++){
        printf("%d ", primos[i]);
    }


}
