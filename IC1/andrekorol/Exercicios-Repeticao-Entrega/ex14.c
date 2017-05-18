#include <stdio.h>
#define PROPRIEDADES 5
#define PESSOAS 20
int main(void) {
    int index_idade = 0, index_peso = 1, index_altura = 2, index_olhos = 3;
    int index_cabelos = 4;
    struct  {
        enum { is_int, is_float, is_char } type;
        union {
            int idade;
            float peso;
            float altura;
            char olhos;
            char cabelos;
        } propriedade;
    } pessoas[PESSOAS][PROPRIEDADES];

    char nome[40];
    int i, j, numero_pessoa = 1;
    for (i = 0; i < PESSOAS; i++) {
        printf("Entre o nome da pessoa de numero %d: \n", i + 1);
        scanf(" %s", nome);
        for (j = 0; j < PROPRIEDADES; j++) {
            switch (j) {
                case 0:
                pessoas[i][j].type = is_int;
                printf("Entre a idade da pessoa de numero %d(%s): \n", i + 1,
                nome);
                scanf(" %d", &pessoas[i][j].propriedade.idade);
                break;

                case 1:
                pessoas[i][j].type = is_float;
                printf("Entre, em kg, o peso da pessoa de numero %d(%s) e.g 74: \n",
                i + 1, nome);
                scanf(" %f", &pessoas[i][j].propriedade.peso);
                break;

                case 2:
                pessoas[i][j].type = is_float;
                printf("Entre, em metros, a altura da pessoa de numero %d(%s)  e.g. 1.83: \n",
                i + 1, nome);
                scanf(" %f", &pessoas[i][j].propriedade.altura);
                break;

                case 3:
                pessoas[i][j].type = is_char;
                printf("Entre a cor dos olhos da pessoa de numero %d(%s): \n",
                i + 1, nome);
                printf("(A)Azul\t(P)Preto\t(V)Verde\t(C)Castanho\n");
                scanf(" %c", &pessoas[i][j].propriedade.olhos);
                break;

                case 4:
                pessoas[i][j].type = is_char;
                printf("Entre a cor dos cabelos da pessoa de numero %d(%s): \n",
                i + 1, nome);
                printf("(P)Preto\t(C)Castanho\t(L)Louro\t(R)Ruivo\n");
                scanf(" %c", &pessoas[i][j].propriedade.cabelos);
                break;

            }
        }
    }

    int idade_50_peso_60 = 0;   // a quantidade de pessoas com idade superior a
                                // 50 anos e peso inferior a 60 quilos(kg)

    float media_idades_altura_150 = 0;  // a média das idades das pessoas com
                                        // altura inferior a 1.50m (metros)

    float pessoas_altura_menor_150 = 0; // a quantidade de pessoas com altura
                                        // inferior a 1.50m (metros)

    float porcentagem_olhoz_azuis = 0;  // a percentagem de pessoas com olhos
                                        // azuis entre todas as pessoas analisadas

    int ruivos_sem_olhos_azuis = 0;     // a quantidade de pessoas ruivas e que
                                        // não possuem olhos azuis


    for (i = 0; i < PESSOAS; i++) {
        if ( (pessoas[i][index_idade].propriedade.idade > 50) &&
        (pessoas[i][index_peso].propriedade.peso < 60) ) {
            idade_50_peso_60 += 1;
        }
        else if (pessoas[i][index_altura].propriedade.altura < 1.50) {
            media_idades_altura_150 += pessoas[i][index_idade].propriedade.idade;
            pessoas_altura_menor_150 += 1;
        }
        else if (pessoas[i][index_olhos].propriedade.olhos == 'A') {
            porcentagem_olhoz_azuis += 1;
        }
        else if ( (pessoas[i][index_cabelos].propriedade.cabelos == 'R') &&
        (pessoas[i][index_olhos].propriedade.olhos != 'A') ) {
            ruivos_sem_olhos_azuis += 1;
        }
    }

    printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos(kg) = %d\n",
    idade_50_peso_60);

    media_idades_altura_150 = media_idades_altura_150 / pessoas_altura_menor_150;
    printf("A média das idades das pessoas com altura inferior a 1.50 metros(%.0f pessoas) = %.2f anos\n",
    pessoas_altura_menor_150, media_idades_altura_150);

    porcentagem_olhoz_azuis = (porcentagem_olhoz_azuis / 20.0) * 100.0;
    printf("A percentagem de pessoas com olhos azuis entre todas as pessoas analisadas = %.2f%%\n",
    porcentagem_olhoz_azuis);

    printf("A quantidade de pessoas ruivas e que não possuem olhos azuis = %d\n",
    ruivos_sem_olhos_azuis);

    return 0;

}
