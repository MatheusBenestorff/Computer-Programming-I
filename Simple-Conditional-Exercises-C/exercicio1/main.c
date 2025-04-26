#include <stdio.h>

void main()
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Pessoa maior de idade");
    }
    else{
        printf("Pessoa menor de idade");
    }


}
