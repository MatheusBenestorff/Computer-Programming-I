#include <stdio.h>

void main()
{
    int i, n, cont;


    for(i = 0, cont = 0; i < 15; i ++){
        printf("Digite o numero  %d: ", i+1);
        scanf("%d", &n);

        if((n >= 10)&&(n <= 20)){
            cont ++;
        }
    }

    printf("Foram informados %d valores no intervalo especificado.", cont);


}
