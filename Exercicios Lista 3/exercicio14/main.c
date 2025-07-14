#include <stdio.h>

void main()
{
    int matricula;
    float n1, n2, n3, media;

    printf("Digite o numero da matricula do aluno: ");
    scanf("%i", &matricula);

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &n2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &n3);

    media = ((n1 * 3)+ (n2 * 3) + (n3 * 4)) / 10;

    printf("Codigo do aluno: %d\n", matricula);
    printf("Media: %.2f\n", media);

    if(media >= 6){
        printf("Aprovado!");
    }else{
        printf("Reprovado!");
    }

}
