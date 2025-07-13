/**
Fa�a um programa em C que leia valores inteiros positivos e guarde em um vetor at� o usu�rio digitar um n�mero negativo
(no m�ximo 100 valores). Depois, ordene o vetor de valores V�LIDOS (Inteiros positivos) em ordem crescente.

<----Como lidar com vetores de tamanho variado--->
**/

#include <stdio.h>

void main()
{
    int valores[100], i, j, aux, tam = 0;

    for(i = 0; i < 100; i++){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &valores[i]);

        if(valores[i] >= 0) tam++;
        else break;
    }

    //M�todo Bubble Sort
    for(i = 0; i < tam-1; i++){
        for(j = 0; j < tam-1; j++){
            if(valores[j] > valores[j+1]){
                aux = valores[j];
                valores[j] = valores[j+1];
                valores[j+1] = aux;
            }
        }
    }

    for(j = 0; j < tam; j++){
        printf("%d\n", valores[j]);
    }
}
