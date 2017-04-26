#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main() {
    void clearScreen() {
        const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
    }

    int choice1, choice2, choice3;
    bool chosen = false;
    const char *classe, *caracteristica1, *caracteristica2, *animal;

    while (chosen == false) {
        printf("Vamos descobrir em qual animal você pensou!\n");
        printf("Primeiramente, escolha a classe do seu animal.");
        printf("Para isso entre um dos três números:\n");
        printf("Mamífero(1)\tAve(2)\tRéptil(3)\n");
        scanf(" %d", &choice1);
        if ( (choice1 == 1) || (choice1 == 2) || (choice1 == 3) ) {
            chosen = true;
        }
        else{
            clearScreen();
            printf("Comando inválido! Por favor, entre um dos possíveis ");
            printf("números.\n");
        }
    }
    chosen = false;
    while (chosen == false) {
        if (choice1 == 2) {
            classe = "ave";
            printf("Agora escolha se sua %s é:\nnão-voadora(1)\t", classe);
            printf("nadadora(2)\tde rapina(3)\n");
            scanf(" %d", &choice2);
        }
        else if (choice1 == 1) {
            classe = "mamífero";
            printf("Agora escolha se seu %s é:\nquadrúpede(1)\t", classe);
            printf("bípede(2)\tvoador(3)\taquático(4)\n");
            scanf(" %d", &choice2);
        }
        else if (choice1 == 3) {
            classe = "réptil";
            printf("Agora escolha se seu %s é um %s:\n", classe, classe);
            printf("com casco(1)\tcarnívoro(2)\tsem patas(3)\n");
            scanf(" %d", &choice2);
        }
        if ( (choice2 == 1) || (choice2 == 2) || (choice2 == 3) ||
        (choice2 == 4)) {
            chosen = true;
        }
        else{
            clearScreen();
            printf("Comando inválido! Por favor, entre um dos possíveis");
            printf("números.\n");
        }
    }

    if ( (choice1 == 1) && (choice2 == 3)) {
        animal = "morcego";
        printf("Seu animal escolhido é o %s!\n", animal);
    }
    else if ( (choice1 == 1) && (choice2 == 4) ) {
        animal = "baleia";
        printf("Seu animal escolhido é a %s!\n", animal);
    }
    if ( (choice1 == 1) && (choice2 == 1) ) {
        while ( (choice3 != 1) && (choice3 != 2)) {
            caracteristica1 = "quadrúpede";
            printf("Agora escolha se seu %s %s", classe, caracteristica1);
            printf("é:\ncarnívoro(1)\therbívoro(2)");
            scanf(" %d", &choice3);
            if (choice3 == 1) {
                animal = "leão";
                printf("Seu animal escolhido é o %s\n!", animal);
            }
            else if (choice3 == 2) {
                animal = "cavalo";
                printf("Seu animal escolhido é o %s!\n", animal);
            }
            else{
                clearScreen();
                printf("Comando inválido! Por favor, entre um dos");
                printf("possíveis números.\n");
            }
        }
    }
    else if ( (choice1 == 1) && (choice2 == 2)) {
        while ( (choice3 != 1) && (choice3 != 2) ) {
            caracteristica1 = "bípede";
            printf("Agora escolha se seu %s %s", classe, caracteristica1);
            printf("é:\nonívoro(1)\tfrutífero(2)\n");
            scanf(" %d", &choice3);
            if (choice3 == 1) {
                animal = "homem";
                printf("Seu animal escolhido é o %s!\n", animal);
            }
            else if (choice3 == 2) {
                animal = "macaco";
                printf("Seu animal escolhido é o %s!\n", animal);
            }
            else{
                clearScreen();
                printf("Comando inválido! Por favor, entre um dos");
                printf("possíveis números.\n");
            }
        }
    }
    else if ( (choice1 == 2) && (choice2 == 1) ) {
        while ( (choice3 != 1) && choice3 != 2) {
            caracteristica2 = "não-voadora";
            printf("Agora escolha se sua %s %s", classe, caracteristica1);
            printf("é:\ntropical(1)\tpolar(2)\n");
            scanf(" %d", &choice3);
            if (choice3 == 1) {
                animal = "avestruz";
                printf("Seu animal escolhido é o %s!\n", animal);
            }
            else if (choice3 == 2) {
                animal = "pinguim";
                printf("Seu animal escolhido é o %s!\n", animal);
            }
            else{
                clearScreen();
                printf("Comando inválido! Por favor, entre um dos");
                printf("possíveis números.\n");
            }
        }
    }
    else if ( (choice1 == 2) && (choice2 == 2) ) {
        animal = "pato";
        printf("Seua animal escolhido é o %s!\n", animal);
    }
    else if ( (choice1 == 2) && (choice2 == 3) ) {
        animal = "águia";
        printf("Seu animal escolhido é a %s!\n", animal);
    }
    else if ( (choice1 == 3) && (choice2 == 1)) {
        animal = "tartaruga";
        printf("Seu animal escolhido é a %s!\n", animal);
    }
    else if ( (choice1 == 3) && (choice2 == 2) ) {
        animal = "crocodilo";
        printf("Seu animal escolhido é o %s!\n", animal);
    }
    else if ( (choice1 == 3) && (choice2 == 3) ) {
        animal = "cobra";
        printf("Seu animal escolhido é a %s!\n", animal);
    }

    return 0;
}
