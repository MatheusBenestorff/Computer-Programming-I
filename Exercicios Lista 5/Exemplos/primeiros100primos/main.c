#include <stdio.h>

void main()
{
    int n, i, div, primo;

    n = 1;
    i = 1;
    while(i <= 100){
        for (div = 2, primo = 1; div < n; div ++){
            if (n % div == 0){
                primo = 0;
                break;
            }
        }

        if (n == 1) primo = 0;
        if (primo == 1){
            printf("%d\n", n);
            i++;
        }
        n++;
    }



}
