#include <stdio.h>

void main()
{
    int n = 1;

    while (n != 0){
        printf("Digite o numero: ");
        scanf("%d", &n);

        if((n != 0)&&(n % 2 == 0)){
            printf("Par.");
        }
    }
}
