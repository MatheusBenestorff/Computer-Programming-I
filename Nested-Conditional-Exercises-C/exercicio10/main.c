#include <stdio.h>

void main()
{
    int n;
    printf("Digite um numero inteiro de 8 digitos: ");
    scanf("%d", &n);

    if((n % 10) == (n / 10000000)){
        n = n % 10000000;
        n = n / 10;

        if((n % 10)==(n/100000)){
            n = n% 100000;
            n = n / 10;

            if((n % 10)==(n/1000)){
                n = n % 1000;
                n = n / 10;

                if((n % 10)==(n / 10)){
                    printf("Palindromo");
                }
                else{
                    printf("Nao");
                }
            }
            else{
                printf("Nao");
            }
        }
        else{
            printf("Nao");
        }
    }
    else{
        printf("Nao");
    }
}

