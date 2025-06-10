#include <stdio.h>

void main()
{
    int valores[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i+);
        scanf("%d", &valores[i]);
    }

    printf("Valores digitados na ordem contraria:\n");

    for(i = 0; i < 10; i++){
        printf("%d\n", valores[9-i]);
    }
}
