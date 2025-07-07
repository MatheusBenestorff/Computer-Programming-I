#include <stdio.h>

void main()
{
    int valores[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < 10; i++){
        printf("%d - %d\n", valores[i], valores[9-i]);
    }
}
