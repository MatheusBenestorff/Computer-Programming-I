#include <stdio.h>

void main()
{
    int he, me, hs, ms, tempo, horas;

    printf("Digite hora e minuto de entrada: ");
    scanf("%d%d",&he,&me);
    printf("Digite hora e minuto de saida: ");
    scanf("%d%d",&hs,&ms);

    tempo = (60 * hs + ms)-(60 * he + me);

    if (tempo < 0){
        tempo = tempo + 1440;
    }
    horas = tempo / 60;

    if (tempo % 60 != 0){
        horas = horas + 1;
    }

    if (horas == 1){
        printf("R$ 15.00");
    }
    else{
        if (horas <= 3){
            printf("Valor %d", 10 * horas);
        }
        else{
            printf("Valor = %d", 30 + (horas-3) * 7);
        }
    }
}
