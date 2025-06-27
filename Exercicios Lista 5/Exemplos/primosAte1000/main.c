#include <stdio.h>

void main()
{
    int n, div, primo;

    for (n = 1; n <= 1000; n++){

        for(div = 2, primo = 1; div < n; div++){
            if(n % div == 0){
                primo = 0;
                break;
            }
        }
        if (n == 1) primo = 0;
        if (primo == 1) printf("%d\n", n);
    }
}

