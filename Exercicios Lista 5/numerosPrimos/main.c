#include <stdio.h>

void main()
{
    int n, div, primo;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    for (div = 2, primo = 1; div < n; div ++){
        if (n % div == 0){
            primo = 0;
            break;
        }
    }


    if((n == 1)||(primo == 0)){
        printf("Nao primo.");
    }
    else{
        printf("Primo.");
    }
}
