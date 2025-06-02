#include <stdio.h>

void main()
{
    int dividendo, divisor, quociente, resto;

    printf("Digite um numero inteiro correspondente ao dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite um numero inteiro correspondente ao divisor: ");
    scanf("%d", &divisor);

    if(divisor == 0){
        printf("Erro, divisao por zero proibida");
    }
    quociente = 0;
    while(dividendo >= divisor){
        dividendo = dividendo - divisor;
        quociente ++;
    }

    printf("Quociente da divisao = %d", quociente);
}
