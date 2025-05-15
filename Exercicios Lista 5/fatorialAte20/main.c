#include <stdio.h>

void main()
{
    int n, i, fatorial;

    for (n = 1; n <= 12; n++){
        for (i = 1, fatorial = 1; i <= n; i++){
        fatorial = fatorial * i;
        }
         printf("Fatorial de %d = %d \n", n, fatorial);
    }
}
