#include <stdio.h>

void main()
{
    float a, b, soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    printf("Numeros digitados: %.2f\te %.2f \n", a, b);
    printf("A soma desses numeros e: %.2f \n", soma);
    printf("A subtracao desses numeros e: %.2f \n", subtracao);
    printf("A multiplicacao desses numeros e: %.2f \n", multiplicacao);
    printf("A divisao desses numeros e: %.2f", divisao);

}
