#include <stdio.h>
#include <math.h>

void main()
{
    float peso, altura, imc, maiorIMC, maiorIMCAltura, maiorIMCPeso;
    int i;

    for(i = 1; i <= 10; i++){
        printf("Informe o peso da %da pessoa em kilos: ", i);
        scanf("%f", &peso);
        printf("Informe a altura da %da pessoa em metros: ", i);
        scanf("%f", &altura);

        imc = peso / (pow(altura, 2));

        if(i == 1){
            maiorIMC = imc;
            maiorIMCAltura = altura;
            maiorIMCPeso = peso;
        }
        if(imc > maiorIMC){
            maiorIMC = imc;
            maiorIMCAltura = altura;
            maiorIMCPeso = peso;
        }
    }
    printf("A pessoa de maior IMC (%.2f) mede %.2f metros e pesa %.2fkg.", maiorIMC, maiorIMCAltura, maiorIMCPeso);

}

