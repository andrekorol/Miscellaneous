#include <stdio.h>
int main(int argc, char const *argv[]) {
    int l1, l2, l3;
    printf("Entre a medida do primeiro lado: \n");
    scanf("%d", &l1);
    printf("Entre a medida do segundo lado: \n");
    scanf("%d", &l2);
    printf("Entre a medida do terceiro lado: \n");
    scanf("%d", &l3);

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        if ((l1 == l2) && (l2 == l3)) {
            printf("Triângulo equilátero\n");
        }
        else if ((l1 == l2) || (l1 == l3) || (l2 == l3)) {
            printf("Triângulo isósceles\n");
        }
        else{
            printf("Triângulo escaleno\n");
        }
    }

    else{
        printf("As medidas %d, %d e %d não formam um triângulo\n", l1, l2, l3);
    }
    return 0;
}
