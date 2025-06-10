#include <stdio.h>

void main()
{
    int n, d1, d2, d3;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &n);


    d1 = n / 100;
    n = n % 100;
    d2 = n / 10;
    d3 = n % 10;

    if ((d1 >= d2) && (d1 >= d3)){
        if (d2 >= d3){
            printf("%d%d%d", d1,d2,d3);
        }
        else{
            printf("%d%d%d", d1,d3,d2);
        }
    }else if ((d2 >= d1)&&(d2 >= d3)){
        if (d1 >= d3){
            printf("%d%d%d", d2,d1,d3);
        }
        else{
            printf("%d%d%d", d2,d3,d1);
        }
    }else{
        if (d2 >= d1){
            printf("%d%d%d", d3,d2,d1);
        }
        else{
            printf("%d%d%d", d3,d1,d2);
        }
    }
}
