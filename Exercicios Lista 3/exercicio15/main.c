#include <stdio.h>

void main()
{
    int matricula;
    float n1, n2, n3, n4, media;

    printf("Digite o numero da matricula do aluno: ");
    scanf("%i", &matricula);
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &n2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &n3);
    printf("Digite a nota 4 do aluno: ");
    scanf("%f", &n4);


    if((n1 <= n2) && (n1 <= n3) && (n1 <= n4)){
        media = (n2 + n3 + n4) / 3;
    }else if((n2 <= n1) && (n2 <= n3) && (n2 <= n4)){
        media = (n1 + n3 + n4) / 3;
    }else if((n3 <= n1) && (n3 <= n2) && (n3 <= n4)){
        media = (n1 + n2 + n4) / 3;
    }else if((n4 <= n1) && (n4 <= n2) && (n4 <= n3)){
        media = (n1 + n2 + n3) / 3;
    }

    printf("Codigo do aluno: %d\n", matricula);
    printf("Media: %.2f\n", media);

    if(media >= 6){
        printf("Aprovado!");
    }else{
        printf("Reprovado!");
    }

}
