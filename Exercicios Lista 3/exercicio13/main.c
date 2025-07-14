#include <stdio.h>

void main()
{
    float n1, n2, n3, exercicios, media;
    char conceito;

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &n2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &n3);
    printf("Digite a nota dos exercicios do aluno: ");
    scanf("%f", &exercicios);

    media = (n1 + (n2 * 2) + (n3 * 2) + (exercicios * 4)) / 10;

    if(media >= 9){
        conceito = 'A';
    }else if((media >= 7.5) && (media < 9)){
        conceito = 'B';
    }else if((media >= 6) && (media < 7.5 )){
        conceito = 'C';
    }else if((media >= 4) && (media < 6)){
        conceito = 'D';
    }else if(media < 4){
        conceito = 'E';
    }


    printf("Notas do aluno: %.2f, %.2f, %.2f e %.2f\n", n1, n2, n3, exercicios);
    printf("Media: %.2f\n", media);
    printf("Conceito: %c", conceito);

}
