#include <stdio.h>

void main()
{
    int primos[10], i = 1, atual, anterior1, anterior2, cont = 0, div, primo;

    while(cont < 10){
        primo = 1;
        if (i == 1){
            atual = 1;
            anterior1 = 0;
        }
        else{
            atual = anterior1 + anterior2 ;
        }
        for(div = 2; div < atual; div++){
            if(atual % div == 0){
                primo = 0;
                break;
            }
        }
        if((primo == 1)&&(atual != 1)){
            primos[cont] = atual;
            cont++;
        }
        anterior2 = anterior1;
        anterior1 = atual;
        i++;
    };

    printf("10 Primeiros numeros primos da sequencia de Fibonacci:\n");

    for(i = 0; i < 10; i++){
        printf("%d ", primos[i]);
    }

}



