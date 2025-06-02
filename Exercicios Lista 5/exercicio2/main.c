#include <stdio.h>

void main()
{
    int codigo, votos, senador1Codigo = 0, senador2Codigo = 0, senador1Votos = 0, senador2Votos = 0;

    while(1){
        printf("Digite o codigo do senador: ");
        scanf("%d", &codigo);

        if(codigo == 0){
            break;
        }

        printf("Digite a quantidade de votos deste senador: ");
        scanf("%d", &votos);

        if(votos >= senador1Votos){

            senador2Codigo = senador1Codigo;
            senador2Votos = senador1Votos;

            senador1Codigo = codigo;
            senador1Votos = votos;
        }else if(votos > senador2Votos){
            senador2Codigo = codigo;
            senador2Votos = votos;
        }

    }
    printf("Senadores eleitos:\n");
    printf("Senador %d: %d votos.\n", senador1Codigo, senador1Votos);
    if(senador2Codigo != ){
        printf("Senador %d: %d votos.", senador2Codigo, senador2Votos);
    }
}
