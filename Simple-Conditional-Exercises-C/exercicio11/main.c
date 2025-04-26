#include <stdio.h>
#include <math.h>

void main()
{
    int codigo, a, b, c;

    printf("Digite o codigo da operacao: ");
    scanf("%d", &codigo);

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);


    if (codigo == 1) {
        printf("Resultado da multiplicacao: %d ", a * b * c);
    }
    if (codigo == 2) {
        printf("Resultado da soma: %d ", a + b + c);
    }
    if (codigo == 3) {
        printf("Resultado da subtracao: %d ", a - b - c);
    }
    if (codigo == 4) {
        printf("Soma dos cubos: %2.f", pow(a, 3) + pow(b, 3) + pow(c, 3));
    }

}
