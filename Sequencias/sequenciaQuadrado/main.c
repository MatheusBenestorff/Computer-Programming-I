#include <stdio.h>


void main(){
    int n, i, atual, anterior;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if (i == 1){
            atual = 1;
        }//Caso inicial
        else{
            atual = anterior + 2*(i-1) + 1;//Regra de formacao
        }

    printf("%d\n", atual);
    anterior = atual;//Atualizacao do valor anterior

    }
}
