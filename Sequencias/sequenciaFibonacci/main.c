#include <stdio.h>


void main()
{
    int n, atual, anterior1, anterior2, i;

    printf("Digite o numero do final da sequencia: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if (i == 1){
            atual = 1;
            anterior1 = 0;
        }
        else{
            atual = anterior1 + anterior2 ;
        }
        printf("%d\n", atual);

        anterior2 = anterior1;
        anterior1 = atual;
    }
}
