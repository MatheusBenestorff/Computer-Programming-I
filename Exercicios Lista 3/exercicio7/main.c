#include <stdio.h>

void main()
{
    int a, b, c, d;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &c);
    printf("Digite o quarto numero inteiro: ");
    scanf("%d", &d);

    if ((a >= b) && (a >= c) && (a >= d)){
        if ((b >= c) && (b >= d)){
                if (c >= d){
                    printf("Numeros em ordem decrescente: %d, %d, %d e %d", a,b,c,d);
                }
                else{
                    printf("Numeros em ordem decrescente: %d, %d, %d e %d", a,b,d,c);
                }
        }
        else{
            if ((c >= b)&& (c >= d )){
                if (b >= d){
                    printf("Numeros em ordem decrescente: %d, %d, %d e %d", a,c,b,d);
                }
                else{
                    printf("Numeros em ordem decrescente: %d, %d, %d e %d", a,c,d,b);
                }
            }
            else ()


        }

    }

}
