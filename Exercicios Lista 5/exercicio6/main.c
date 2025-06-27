#include <stdio.h>

void main(){
    int n1, n2, dividendo, divisor, resto = 1, mdc;

    printf("Digite o primeiro numero natural: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero natural: ");
    scanf("%d", &n2);

    if(n1 >= n2){
        dividendo = n1;
        divisor = n2;
    }else{
        dividendo = n2;
        divisor = n1;
    }

    while(resto != 0){
        resto = dividendo % divisor;
        dividendo = divisor;

        if(resto == 0){
            mdc = divisor;
        }else{
            divisor = resto;
        }
    }

    printf("MDC(%d,%d) = %d", n1, n2, mdc);


}
