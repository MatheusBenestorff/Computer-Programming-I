#include <stdio.h>

void main()
{
    int n, k;
    float soma = 0, t;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    for(k = 1; k <= n; k++){
        if(k % 2 != 0){
            t = -1/(k * k + 1);
        }else{
            t = +1 / (k * k + 1);
        }
        printf("k = %d, termo = %f.\n", k, t);
        soma = soma + t;
    }
    printf("Serie = %f.\n", soma);
}
