#include <stdio.h>

void main()
{
    int c[5], v[5], d[5], e[5], p[5], aux, i, j;

    for(i = 0; i < 5; i++){
        printf("Digite o codigo do time: ");
        scanf("%d", &c[i]);
        printf("Digite o numero de vitorias: ");
        scanf("%d", &v[i]);
        printf("Digite o numero de empates: ");
        scanf("%d", &e[i]);
        printf("Digite o numero de derrotas: ");
        scanf("%d", &d[i]);

        p[i] = ((v[i] * 3) + e[i]);
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if((p[j] < p[j+1]) || ((p[j] == p[j+1]) && (v[j] < v[j+1]))){
                aux = c[j+1];
                c[j+1] = c[j];
                c[j] = aux;

                aux = p[j+1];
                p[j+1] = p[j];
                p[j] = aux;

                aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("Classificacao final: \n");
    for(i = 0; i < 5; i++){
        printf("%d\n", c[i]);
    }
}
