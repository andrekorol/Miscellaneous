#include <stdio.h>
#define SIZE 5

int main(void) {
    int pessoas[15];
    int faixas_etarias[SIZE] = {};
    int i, total = 0;
    int numero_faixa_etaria[SIZE];
    float porcentagem_faixa_etaria1, porcentagem_faixa_etaria2;
    for (i = 0; i < SIZE; i++) {
        numero_faixa_etaria[i] = (i + 1);
    }
    for (i = 0; i <= 14; i++) {
        printf("Entre a idade da pessoas de numero %d: \n", i+1);
        scanf(" %d", &pessoas[i]);
        if (pessoas[i] <= 15)
            faixas_etarias[0] += 1;
        else if ( (pessoas[i] >= 16) && (pessoas[i] <= 30) )
            faixas_etarias[1] += 1;
        else if ( (pessoas[i] >= 31) && pessoas[i] <= 45)
            faixas_etarias[2] += 1;
        else if ( (pessoas[i] >=46) && pessoas[i] <= 60)
            faixas_etarias[3] += 1;
        else if (pessoas[i] >= 61)
            faixas_etarias[4] += 1;
        else
            while (pessoas[i] < 0) {
                printf("Idade invalida! Por favor entre um numero maior que 0");
                printf("Entre a idade da pessoas de numero %d: \n", i+1);
                scanf(" %d", pessoas[i]);
            }
    }
    for (i = 0; i <= 4; i++) {
        printf("Quantidade de pessoas na faixa etaria n. %d = %d\n",
        numero_faixa_etaria[i], faixas_etarias[i]);
        total += faixas_etarias[i];
    }

    porcentagem_faixa_etaria1 = ((float)faixas_etarias[0] / (float)total) * 100;
    porcentagem_faixa_etaria2 = ((float)faixas_etarias[4] / (float)total) * 100;

    printf("A porcentagem de pessoas na primeira faixa etaria em relacao ao total eh de %.2f%%\n",
    porcentagem_faixa_etaria1);
    printf("A porcentagem de pessoas na ultima faixa etaria em relacao ao total eh de %.2f%%\n",
    porcentagem_faixa_etaria2);

    return 0;
}
