#include <stdio.h>

void main()
{
    float n1, n2, n3, media;
    char tipo;

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &n2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &n3);

    printf("Digite o tipo de media a ser calculado: ");
    scanf(" %c", &tipo);

    if((tipo == 'a')||(tipo == 'A')){
        media = (n1 + n2 +n3)/ 3;
        printf("Media = %.2f", media);
    }else if((tipo == 'h')||(tipo == 'H')){
        media = 3 / ((1/n1) + (1/n2) + (1/n3));
        printf("Media = %.2f", media);
    }else{
        printf("Erro! Tipo de operacao invalido.");
    }
}
