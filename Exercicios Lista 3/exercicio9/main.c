#include <stdio.h>

void main()
{
    int d1, d2, d3, d4, d5, n1, n2, n3, n4, n5, n6;

    printf("Digite o numero do primeiro arremesso: ");
    scanf("%d", &d1);
    printf("Digite o numero do segundo arremesso: ");
    scanf("%d", &d2);
    printf("Digite o numero do terceiro arremesso: ");
    scanf("%d", &d3);
    printf("Digite o numero do quarto arremesso: ");
    scanf("%d", &d4);
    printf("Digite o numero do quinto arremesso: ");
    scanf("%d", &d5);

    n1 = n2 = n3 = n4 = n5 = n6 = 0;

    switch (d1){
    case 1:
        n1 = n1+1;
        break;
    case 2:
        n2 = n2+1;
        break;
    case 3:
        n3 = n3+1;
        break;
    case 4:
        n4 = n4+1;
        break;
    case 5:
        n5 = n5+1;
        break;
    case 6:
        n6 = n6+1;
        break;
}

    switch (d2){
    case 1:
        n1 = n1+1;
        break;
    case 2:
        n2 = n2+1;
        break;
    case 3:
        n3 = n3+1;
        break;
    case 4:
        n4 = n4+1;
        break;
    case 5:
        n5 = n5+1;
        break;
    case 6:
        n6 = n6+1;
        break;
}

    switch (d3){
    case 1:
        n1 = n1+1;
        break;
    case 2:
        n2 = n2+1;
        break;
    case 3:
        n3 = n3+1;
        break;
    case 4:
        n4 = n4+1;
        break;
    case 5:
        n5 = n5+1;
        break;
    case 6:
        n6 = n6+1;
        break;
}

    switch (d4){
    case 1:
        n1 = n1+1;
        break;
    case 2:
        n2 = n2+1;
        break;
    case 3:
        n3 = n3+1;
        break;
    case 4:
        n4 = n4+1;
        break;
    case 5:
        n5 = n5+1;
        break;
    case 6:
        n6 = n6+1;
        break;
}

    switch (d5){
    case 1:
        n1 = n1+1;
        break;
    case 2:
        n2 = n2+1;
        break;
    case 3:
        n3 = n3+1;
        break;
    case 4:
        n4 = n4+1;
        break;
    case 5:
        n5 = n5+1;
        break;
    case 6:
        n6 = n6+1;
        break;
}


    if((n1 == 5) || (n2 == 5) || (n3 == 5) || (n4 == 5) || (n5 == 5) || (n6 == 5)){
        printf("Os 5 valores sao iguais");
    }
    else{
        if((n1 == 4) || (n2 == 4) || (n3 == 4) || (n4 == 4) || (n5 == 4) || (n6 == 4)){
            printf("4 valores sao iguais e 1 diferente");
        }
        else{
            if(((n1 == 1)&&(n2 == 1)&&(n3 == 1)&&(n4 == 1)&&(n5 == 1)&&(n6 == 0)) || ((n1 == 0)&&(n2 == 1)&&(n3 == 1)&&(n4 == 1)&&(n5 == 1)&&(n6 == 1))){
                printf("Os 5 valores formam uma sequencia");
            }
            else{
                if(((n1 == 3) || (n2 == 3) || (n3 == 3) || (n4 == 3) || (n5 == 3) || (n6 == 3)) && ((n1 == 2) || (n2 == 2) || (n3 == 2) || (n4 == 2) || (n5 == 2) || (n6 == 2))){
                    printf("Os valores formam um full-hand (3 valores iguais entre si e 2 valores iguais entre si)");
                }
                else{
                    printf("Nenhuma das combinacoes acima");
                }
            }
        }

    }
}

