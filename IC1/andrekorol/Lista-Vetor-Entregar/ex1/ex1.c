//
// Created by andre on 17/05/17.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define SIZE 10
#define MAX 1000

int main(void) {
    srand(time(NULL));
    int productIds[SIZE], productQtys[SIZE];
    int clientId = 1, num, productId, productQty;
    bool validProductId;
    
    for (int i = 0; i < SIZE; ++i) {
        num = rand() % MAX;
        productIds[i] = num;
    }
    for (int i = 0; i < SIZE; ++i) {
        num = rand() % MAX;
        productQtys[i] = num;
    }

    while (clientId != 0) {
        printf("Estoque atual:\n");
        for (int i = 0; i < SIZE; ++i)
            printf("Código do produto: %d\nQuantidade do produto de código(%d): %d\n", productIds[i],productIds[i],
                   productQtys[i]);
        printf("Entre o código do cliente:\n");
        scanf(" %d", &clientId);
        if (clientId == 0)
            break;
        else {
            validProductId = false;
            printf("Entre o código do produto que você deseja comprar:\n");
            scanf(" %d", &productId);
            for (int i = 0; i < SIZE; ++i) {
                if (productId == productIds[i]) {
                    printf("Entre a quantidade desejada do produto de código %d:\n", productId);
                    scanf(" %d", &productQty);
                    validProductId = true;
                    if (productQtys[i] >= productQty) {
                        printf("Pedido atendido. Obrigado e volte sempre\n");
                        productQtys[i] -= productQty;
                    }
                    else if ( (productQtys[i] < productQty) && (productQty > 0) )
                        printf("Não temos estoque suficiente desta mercadoria\n");
                }
                if (validProductId == true)
                    break;
            }
            if (validProductId == false)
                printf("Código inexistente\n");
        }

        printf("Pressione qualquer tecla para continuar...\n");
        getchar();
        getchar();
    }
    printf("Estoque final:\n");
    for (int i = 0; i < SIZE; ++i)
        printf("Código do produto:%d\nQuantidade do produto de código(%d): %d\n", productIds[i],productIds[i],
               productQtys[i]);

    return 0;
}
