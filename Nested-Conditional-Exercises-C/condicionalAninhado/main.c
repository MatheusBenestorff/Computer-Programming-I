#include <stdio.h>

void main()
{
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    if (n > 0){
        if (n%2==0){
            printf("Positivo e par.");
        }
        else {
            printf("Positivo e impar.");
        }
    }
    else{
        if (n==0){
            printf("Zero.");
        }
        else{
            printf("Negativo.");
        }
    }

}
