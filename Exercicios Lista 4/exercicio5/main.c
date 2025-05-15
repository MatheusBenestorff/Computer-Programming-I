#include <stdio.h>

void main()
{
    int n, i;

    for(i = 0; i < 10; i++){

        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        if(n % 2 == 0){
            printf("Par.\n");
        }
    }
}
