#include <stdio.h>
#include <stdlib.h>

void main()
{
    float a, b;
    char op;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o sinal de operacao: ");
    scanf(" %c", &op);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    if (op == '+'){
        printf("%.2f %c %.2f = %.2f", a, op, b, (a + b));
    }
    else if (op == '-'){
        printf("%.2f %c %.2f = %.2f", a, op, b, (a - b));
    }
    else if (op == '*'){
    printf("%.2f %c %.2f = %.2f", a, op, b, (a * b));
    }
    else if (op == '/'){
        if (b != 0){
            printf("%.2f %c %.2f = %.2f", a, op, b, (a / b));
        } else {
            printf("Erro: Divisao por Zero!");
            exit(0);
        }
    }
    else {
        printf("Operador invalido.");
        exit(0);
    }

}
