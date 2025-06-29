#include <stdio.h>
//Exercício chato da porra!!

void main()
{
    int sub[100], i, comp_atual = 0, maior_comp = 0, inicio;

    for(i = 0; i < 100; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &sub[i]);

        if(sub[i] < 0) break;

        if(i == 0){
            comp_atual = 1;
        }else if(sub[i] <= sub[i-1]){
            comp_atual ++;
        }
        else{
        comp_atual = 1;
        }

        if(comp_atual > maior_comp){
            maior_comp = comp_atual;
            inicio = i - maior_comp + 1; //Truque pra achar o inicio da maior sequência
        }
    }
    printf("O comprimento da maior sequencia e de %d numeros: \n", maior_comp);
    for(i = 0; i < maior_comp; i++){
        printf("%d ", sub[inicio + i]);
    }
}
