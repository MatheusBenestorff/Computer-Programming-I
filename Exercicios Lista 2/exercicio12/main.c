#include <stdio.h>

void main()
{
    float altura;
    char sexo;

    printf("Digite o sexo da pessoa (M ou F): ");
    scanf("%c", &sexo);
    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);


    if ((sexo == 'm') || (sexo == 'M')) {
        printf("Peso ideal: %.2f ", (72.7 * altura)-58);
    }
    if ((sexo == 'f') || (sexo == 'F')) {
        printf("Peso ideal: %.2f", (62.1 * altura)-44.7);
    }

}
