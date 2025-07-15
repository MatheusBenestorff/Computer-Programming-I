#include <stdio.h>

void main()
{
    int c, rep, ca[50], cb[50], i, j, tamA = 0, tamB = 0;

    for(i = 0; i < 50; i++){
        printf("Digite um codigo de cliente A: ");
        scanf("%d", &c);

        if(c > 0){
            ca[i] = c;
            tamA++;
        }else{
            break;
        }
    }

    for(i = 0; i < 50; i++){
        printf("Digite um codigo de cliente B: ");
        scanf("%d", &c);

        if(c > 0){
            cb[i] = c;
            tamB++;
        }else{
            break;
        }
    }

    for(i = 0; i < tamA; i++){
        printf("%d\n", ca[i]);
    }

    for(i = 0; i < tamB; i++){
        rep = 0;
        for(j = 0; j < tamA; j++){
            if(cb[i] == ca[j]){
                rep = 1;
                break;
            }
        }

        if(rep == 0){
            printf("%d \n", cb[i]);
        }
    }
}
