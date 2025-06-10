#include <stdio.h>

void main(){
    int n, c, de, dd = 10, asc = 1;

    do{
        printf("Digite um numero positivo com 2 digitos. \n");
        scanf("%d", &n);
    }while (n < 10);
    c = n; //copia do valor de n

    while (n != 0){
        de = n % 10;

        if(de >= dd){
            asc = 0;
            break;
        }
        n = n/10;
        dd = de;
    }

    if(asc == 1) printf("%d e ascendente.", c);
    else printf("%d nao e ascendente.", c);
}
