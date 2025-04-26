#include <stdio.h>

void main()
{
    float a, b, c, n1, n2, n3;
    int i;

    printf("Digite um valor inteiro: ");
    scanf("%d", &i);

    printf("Digite o primeiro numero inteiro: ");
    scanf("%f", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%f", &c);


    if ((a >= b) && (a >= c)){
        n3 = a;
        if (b >= c){
            n1 = c;
            n2 = b;
        }
        else{
            n1 = b;
            n2 = c;
        }
    }
    else{
        if ((b >= a) && (b >= c)){
            n3 = b;
            if (a >= c){
                n1 = c;
                n2 = a;
            }
            else{
                n1 = a;
                n2 = c;
            }
        }
        else{
            n3 = c;
            if (b >= a){
                n1 = a;
                n2 = b;
            }
            else{
                n1 = b;
                n2 = a;
            }
        }
    }

    if (i == 1){
        printf("Ordem crescente: %.2f, %.2f e %.2f", n1,n2,n3);
    }
    else{
        if (i == 2){
            printf("Ordem decrescente: %.2f, %.2f e %.2f", n3,n2,n1);
        }
        else{
            printf("Ordem especial: %.2f, %.2f e %.2f", n1,n3,n2);
        }
    }

}
