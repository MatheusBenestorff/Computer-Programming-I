#include <stdio.h>

void main()
{
    int n, fat, i, j;

    for(i = 0; i < 10; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &n);

        if((n < 0) || (n > 12)){
            printf("Numero invalido. \n");
        }
        else{
            for(fat = 1, j = 1; j <= n; j++){
                fat *= j;
            }
            printf("%d! = %d \n", n, fat);
        }
    }
}
