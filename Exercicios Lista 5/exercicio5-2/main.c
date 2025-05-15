#include <stdio.h>

void main()
{
    int n1, n2, div, aux;

    printf("Digite o primeiro numero natural: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero natural: ");
    scanf("%d", &n2);

    //Troca de variável
    if(n2 < n1){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    div = n1;
    while((n1 % div != 0)||(n2 % div != 0)){
            div = div - 1;
    }

    printf("MDC(%d,%d) = %d. \n", n1, n2, div);

}
