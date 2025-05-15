#include <stdio.h>

void main()
{
    int n1, n2, mdc;

    printf("Digite o primeiro numero natural: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero natural: ");
    scanf("%d", &n2);

    mdc = 1;

    while ((n1 % 2 == 0)&&(n2 % 2 == 0)){
        n1 = n1 / 2;
        n2 = n2 / 2;

        mdc = mdc * 2;
    }

    while ((n1 % 3 == 0)&&(n2 % 3 == 0)){
        n1 = n1 / 3;
        n2 = n2 / 3;

        mdc = mdc * 3;
    }
    while ((n1 % 5 == 0)&&(n2 % 5 == 0)){
        n1 = n1 / 5;
        n2 = n2 / 5;

        mdc = mdc * 5;

    }
    while ((n1 % 7 == 0)&&(n2 % 7 == 0)){
        n1 = n1 / 7;
        n2 = n2 / 7;

        mdc = mdc * 7;

    }

    printf("O MDC e: %d", mdc);
}
