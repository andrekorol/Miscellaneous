#include <stdio.h>
#define ESPECTADORES 15
#define PROPRIEDADES 2
int main(void) {
    int idade, opiniao = 0, i;
    int pessoas[ESPECTADORES][PROPRIEDADES];
    int index_idade = 0, index_opiniao = 1;
    float respostas_otimo = 0, idades_otimo = 0, respostas_regular = 0;
    float respostas_bom = 0, porcentagem_bom;

    for (i = 0; i < ESPECTADORES; i++)
        pessoas[i][index_opiniao] = 0;

    for (i = 0; i < ESPECTADORES; i++) {
        printf("Entre a idade da pessoa de numero %d: \n", i + 1);
        scanf(" %d", &pessoas[i][index_idade]);
        while ((pessoas[i][index_opiniao] <= 0) || (pessoas[i][index_opiniao]
        >= 4)){
            printf("Entre a opiniao da pessoa de numero %d: \n", i + 1);
            printf("(3)Otimo\t(2)Bom\t(1)Regular\n");
            scanf(" %d", &pessoas[i][index_opiniao]);
        }
    }
    for (i = 0; i < ESPECTADORES; i++) {
        if (pessoas[i][index_opiniao] == 3){
            respostas_otimo++;
            idades_otimo += pessoas[i][index_idade];
        }
        if (pessoas[i][index_opiniao] == 1)
            respostas_regular++;
        if (pessoas[i][index_opiniao] == 2)
            respostas_bom++;
    }
    idades_otimo /= respostas_otimo;
    porcentagem_bom = (respostas_bom / ESPECTADORES) * 100;

    printf("A media das idades das pessoas que responderam otimo = %.0f anos\n",
    idades_otimo);
    printf("A quantidade de pessoas que respondeu regular = %.0f\n",
    respostas_regular);
    printf("A percentagem de pessoas que respondeu bom entre todos os especta");
    printf("dores analisados = %.2f%%\n", porcentagem_bom);

    return 0;
}
