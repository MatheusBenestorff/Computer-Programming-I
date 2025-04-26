#include <stdio.h>


void main()
{
    int a, b, a1, a2, a3, b1, b2, b3;

    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro de 3 digitos: ");
    scanf("%d", &b);

    a3 = a % 10;
    a = a / 10;
    a2 = a % 10;
    a1 = a / 10;

    b3 = b % 10;
    b = b / 10;
    b2 = b % 10;
    b1 = b / 10;

    if(((a1 == b1) || (a1 == b2) || (a1 == a3) && (a2 == b1) || (a2 == b2) || (a2 == a3)) && (a3 == b1) || (a3 == b2) || (a3 == b3)){
        printf("Os numeros possuem os mesmos digitos");
    }
    else{
        printf("Os digitos dos numeros sao diferentes");
    }

}
