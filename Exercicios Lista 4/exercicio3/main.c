#include <stdio.h>

void main()
{
    int n;

    for (n = 1; n <= 50; n++){
        if (n % 2 == 0){
            printf("%d\n", n);
        }
    }
}
