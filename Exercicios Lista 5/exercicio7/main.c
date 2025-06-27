#include <stdio.h>

void main()
{
    int n1, n2, n1c, n2c, divisor = 2, mmc = 1;

    printf("Digite um numero natural entre 1 e 500: ");
    scanf("%d", &n1);
    printf("Digite um numero natural entre 1 e 500: ");
    scanf("%d", &n2);

    n1c = n1;
    n2c = n2;

    while((n1 != 1)||(n2 != 1)){
        if((n1 % divisor == 0)||(n2 % divisor == 0)){
            mmc = mmc * divisor;

            if(n1 % divisor == 0){
                n1 = n1 / divisor;
            }
            if(n2 % divisor == 0){
                n2 = n2 / divisor;
            }
        }
        else{
            divisor ++;
        }
    }

    printf("MMC(%d,%d) = %d", n1c, n2c, mmc);

}
