#include <stdio.h>

void main()
{
    float altura, peso, maisAltaAltura, maisAltaPeso;
    int i;

    for(i = 1; i <= 10; i++){
        printf("Digite o peso da %da pessoa em kilos: ", i);
        scanf("%f", &peso);
        printf("Digite a altura da %da pessoa em metros: ", i);
        scanf("%f", &altur a);

        if(i == 1){
            maisAltaAltura = altura;
            maisAltaPeso = peso;
        }
        if(altura > maisAltaAltura){
            maisAltaAltura = altura;
            maisAltaPeso = peso;
        }
    }

    printf("A pessoa mais alta mede %.2f metros e pesa %.2fkg", maisAltaAltura, maisAltaPeso);
}
