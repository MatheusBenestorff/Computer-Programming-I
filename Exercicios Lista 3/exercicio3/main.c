#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &c);

    if ((a >= b) && (a >= c)){
        if (b >= c){
            printf("Numeros em ordem crescente: %d, %d e %d", c,b,a);
        }
        else{
            printf("Numeros em ordem crescente: %d, %d e %d", b,c,a);
        }
    }
    else{
        if ((b >= a) && (b >= c)){
            if (a > c){
                printf("Numeros em ordem crescente: %d, %d e %d", c,a,b);
            }
            else{
                printf("Numeros em ordem crescente: %d, %d e %d", a,c,b);
            }
        }
        else{
            if (b > a){
                printf("Numeros em ordem crescente: %d, %d e %d", a,b,c);
            }
            else{
                printf("Numeros em ordem crescente: %d, %d e %d", b,a,c);
            }
        }
    }

}
