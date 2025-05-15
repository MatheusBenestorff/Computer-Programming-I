#include <stdio.h>

void main()
{
    int n;

    for (n = 1; n != 0;){
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        if((n !=  0)&&(n % 2 == 0)){
            printf("Par.\n");
        }
    }
}
