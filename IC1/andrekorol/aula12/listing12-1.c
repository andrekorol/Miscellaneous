//
// Created by andre on 18/05/17.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 10;
    int *b = NULL;

    printf("conteudo de a: %d\n", a);
    printf("endereço(int) de a: %d\n", &a);
    printf("endereço(correto) de a: %p\n", (void *)&a);

    b = &a;
    printf("conteudo de b: %d\n", *b);
    printf("endereço(int) de b: %d\n", b);
    printf("endereço correto de b: %p\n", b);

    *b = 15;
    printf("conteudo de a: %d\n", a);
    printf("conteudo de b: %d\n", *b);
    printf("conteudo de a: %d\n", *(&a));

    return 0;
}