#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

#ifdef _WIN32
        system("cls");
    }
    
    

#elif __APPLE__
    #include "TargetConditionals.h"
    #if TARGET_OS_MAC
        void clearScreen() {
            system("clear");
        }
    #else
    #   erro "This Apple platform is not supported"
    #endif
#elif __linux__
    void clearScreen() {
        system("clear");
    }
#elif __unix__
    void clearScreen() {
    }
#elif defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
#include <sys/param.h>
#if defined(BSD)
    void clearScreen() {
        system("clear");
    }
#endif
#endif


int main(void) {
    setlocale(LC_ALL, "portuguese");

    char sexo, nacionalidade;
    int idade;
    char nome[40];

    printf("Entre o nome:\n");
    scanf(" %s", nome);

    printf("Entre o sexo da pessoa:\n(M) para o sexo masculino\t");
    printf("(F) para o sexo feminino\n");
    scanf(" %c", &sexo);

    while ( (sexo != 'M') && (sexo != 'F') ) {
        if ( (sexo != 'M') && (sexo != 'F') ) {
            clearScreen();
            printf("Entrada invalida!\n");
        }
        printf("Entre o sexo da pessoa:\n(M) para o sexo masculino\t");
        printf("(F) para o sexo feminino\n");
        scanf(" %c", &sexo);

    }
    while ( (nacionalidade != 'b') && (nacionalidade != 'e') ) {
        printf("Entre a nacionalidade da pessoa:\n(b) para brasileiro\t");
        printf("(e) para estrangeiro\n");
        scanf(" %c", &nacionalidade);
        if ( (nacionalidade != 'b') && (nacionalidade != 'e') ) {
            clearScreen();
            printf("Entrada invalida!\n");
        }
    }

    if (nacionalidade == 'e') {
        printf("%s, por ser estrangeiro(a) nao esta habilitado a dirigir\n", nome);

        return 0;
    }
    
    printf("Entre a idade da pessoa:\n");
    scanf(" %d", &idade);
    while ( (!(idade >= 0)) && (!(idade <= 150)) ) {
        printf("Entre a idade da pessoa:\n");
        scanf(" %d", &idade);
        if ( (!(idade >= 0)) && (!(idade <= 150)) ) {
            clearScreen();
            printf("Idade invalida! Entre uma idade entre 0 e 150\n");
        }
    }

    if (idade >= 18) {
        if (sexo == 'M') {
            printf("%s, brasileiro do sexo masculino e maior de idade, esta habilitado a dirigir\n", nome);
        }
        else if (sexo == 'F') {
            printf("%s, brasileira do sexo masculino e maior de idade, esta habilitada a dirigir\n", nome);
        }   
    }
    else {
        if (sexo == 'M') {
            printf("%s, brasileiro do sexo masculino e menor de idade, nao esta habilitado a dirigir\n", nome);
        }
        else if (sexo == 'F') {
            printf("%s, brasileira do sexo feminino e menor de idade, nao esta habilitada a dirigir\n", nome);
        }
    }
    return 0;
}
