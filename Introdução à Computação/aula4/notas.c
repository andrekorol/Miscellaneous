#include <stdio.h>
int main(void)
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Entre a nota número 1: \n");
    scanf("%f", &nota1);
    printf("Entre o peso da nota 1: \n");
    scanf("%f", &peso1);
    nota1 *= peso1;

    printf("Entre a nota número 2: \n");
    scanf("%f", &nota2);
    printf("Entre o peso da nota 2: \n");
    scanf("%f", &peso2);
    nota2 *= peso2;

    printf("Entre a nota número 3: \n");
    scanf("%f", &nota3);
    printf("Entre o peso da nota 3: \n");
    scanf("%f", &peso3);
    nota3 *= peso3;

    media = (nota1 + nota2 + nota3) / (peso1 + peso2 + peso3);

    printf("A média do aluno é: %.2f\n", media);

    return 0;
}
