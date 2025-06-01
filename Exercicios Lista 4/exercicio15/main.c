#include <stdio.h>

void main()
{
    int codigo, idade, i;
    int alunosEngenharia = 0, alunosComputacao = 0, alunosAdm = 0;
    int alunosNaFaixaIdade = 0;
    int somaIdadeEngenharia = 0, somaIdadeComputacao = 0, somaIdadeAdm = 0;
    float mediaEngenharia, mediaComputacao, mediaAdm;

    for(i = 1; i <=15; i++){
        printf("Digite codigo do curso (1: engenharia; 2: computacao; 3: administracao): ");
        scanf("%d", &codigo);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if(codigo == 1){
            alunosEngenharia ++;
            somaIdadeEngenharia += idade;
        }else if(codigo == 2){
            alunosComputacao ++;
            somaIdadeComputacao += idade;
        }else if(codigo == 3){
            alunosAdm ++;
            somaIdadeAdm += idade;
        }else{
            printf("Codigo invalido.");
            i--;
        }

        if((idade >= 20) && (idade <= 25)){
            alunosNaFaixaIdade += 1;
        }
    }
    mediaEngenharia = somaIdadeEngenharia / alunosEngenharia;
    mediaComputacao = somaIdadeComputacao /alunosComputacao;
    mediaAdm = somaIdadeAdm / alunosAdm;

    printf("Numero de alunos matriculados em Engenharia: %d.\n", alunosEngenharia);
    printf("Numero de alunos matriculados em Computacao: %d.\n", alunosComputacao);
    printf("Numero de alunos matriculados em Admnistracao: %d.\n", alunosAdm);
    printf("Numero de alunos com idade entre 20 e 25 anos: %d.\n", alunosNaFaixaIdade);

    if((mediaEngenharia < mediaComputacao)&&(mediaEngenharia < mediaAdm)){
        printf("Codigo do curso com a menor media de idade: 1");
    }else if((mediaComputacao < mediaEngenharia)&&(mediaComputacao < mediaAdm)){
        printf("Codigo do curso com a menor media de idade: 2");
    }else if((mediaAdm < mediaEngenharia)&&(mediaAdm < mediaComputacao)){
        printf("Codigo do curso com a menor media de idade: 3");
    }else{
        printf("Os tres cursos possuem a mesma media de idade.");
    }

}
