#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

int main(void) {
    void clearScreen() {
        const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
    }

    const char *genero;
    char sexo;
    int idade, ano_contratacao, ano_atual, tempo_de_empresa, acrescimo;
    bool is_salario_base_set = false;
    float reajuste;
    double salario_base, novo_salario;

    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    ano_atual = 1900 + timeinfo->tm_year;

    while ( (((idade < 18) && (idade >= 0)) || (idade >= 100)) || (idade < 0) ){
        printf("Entre a idade do funcionário: \n");
        scanf(" %d", &idade);
        if (idade < 0) {
            if (idade == -1) {
                clearScreen();
                printf("Impossível alguém ter %d ano de idade.\n", idade);
                printf("Por favor verifique os dados e entre-os novamente\n");
            }
            else{
                clearScreen();
                printf("Impossível alguém ter %d anos de idade.\n", idade);
                printf("Por favor verifique os dados e entre-os novamente\n");
            }
        }
        if (((idade < 18) && (idade >= 0)) || (idade >= 100)) {
            if (idade == 1) {
                clearScreen();
                printf("Não temos nenhum funcionário com %d ano de ", idade);
                printf("idade.\n");
                printf("Por favor verifique os dados e entre-os novamente\n");
            }
            else{
                clearScreen();
                printf("Não temos nenhum funcionário com %d anos de ", idade);
                printf("idade\n");
                printf("Por favor verifique os dados e entre-os novamente\n");
            }
        }
        else{
            break;
        }
    }

    while ( (sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f') ) {
        printf("Entre o sexo do funcinário:\n('M' ou 'm' para o genêro mascu");
        printf("lino)\n('F' ou 'f' para o genêro feminino)\n");
        scanf(" %c", &sexo);
        if ((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f')) {
            clearScreen();
            printf("Sabemos que já estamos em %d e que há diversas", ano_atual);
            printf(" nomenclaturas");
            printf(" para as identidades e orientações sexuais, mas por ");
            printf("avor, entre uma letra representando um gênero:\n");
        }
        else{
            break;
        }
    }

    while (is_salario_base_set == false) {
        printf("Entre o salário base do funcionário: \n");
        scanf(" %lf", &salario_base);
        if (salario_base < 0) {
            clearScreen();
            printf("Impossível alguém receber um salário negativo.\n");
            printf("Por favor verifique os dados e entre-os novamente\n");
        }
        else if (salario_base == 0) {
            clearScreen();
            printf("Impossível algúem receber um salário igual a R$0.00\n");
        }
        else{
            is_salario_base_set =true;
            break;
        }
    }

    while ( (ano_contratacao < 1917) || (ano_contratacao > ano_atual) ) {
        printf("Entre o ano de contratação do funcionário: \n");
        scanf(" %d", &ano_contratacao);
        if (ano_contratacao < 1917) {
            clearScreen();
            printf("Impossível alguém ter entrado na empresa antes de 1917.");
            printf("Nosso limite para funcionários é de até 99 anos.");
            printf("Por favor verifique os dados e entre-os novamente\n");
        }
        if (ano_contratacao > ano_atual) {
            clearScreen();
            printf("Impossível alguém ter sido contratado ");
            printf("em %d ", ano_contratacao);
            printf("uma vez que estamos em %d\n", ano_atual);
            printf("Por favor verifique os dados e entre-os novamente\n");
        }
        else{
            tempo_de_empresa = ano_atual - ano_contratacao;
            break;
        }
    }

    if ( (idade >= 18) && (idade <= 39) ) {
        switch (sexo) {
            case 'M':
            case 'm':
            reajuste = 10.0 / 100.0;
            if (tempo_de_empresa <= 10) {
                acrescimo = (-10);
            }
            else{
                acrescimo = 17;
            }
            break;

            case 'F':
            case 'f':
            reajuste = 8.0 / 100.0;
            if (tempo_de_empresa <= 10) {
                acrescimo =(-11);
            }
            else{
                acrescimo = 16;
            }
            break;
        }
    }
    else if ( (idade >= 40) && (idade <= 69) ) {
        switch (sexo) {
            case 'M':
            case 'm':
            reajuste = 8.0 / 100.0;
            if (tempo_de_empresa <= 10) {
                acrescimo = (-5);
            }
            else{
                acrescimo = 15;
            }
            break;

            case 'F':
            case 'f':
            reajuste = 10.0 / 100.0;
            if (tempo_de_empresa <= 10) {
                acrescimo = (-7);
            }
            else{
                acrescimo = 14;
            }
            break;
        }
    }
    else if ( (idade >= 70) && (idade <= 99) ) {
        switch (sexo) {
            case 'M':
            case 'm':
            reajuste = 15.0 / 100.0;
            if (tempo_de_empresa <= 10) {
                acrescimo = (-15);
            }
            else{
                acrescimo = 13;
            }
            break;

            case 'F':
            case 'f':
            reajuste = 17.0 / 100.0;
            if (tempo_de_empresa <= 10) {
                acrescimo =(-17);
            }
            else{
                acrescimo = 12;
            }
        }
    }
    novo_salario = (salario_base * (1 + reajuste)) + acrescimo;
    if ( (sexo =='M') || (sexo == 'm') ) {
        genero = "masculino";
    }
    else if ( (sexo == 'F') || (sexo == 'f') ) {
        genero = "feminino";
    }

    printf("O funcionário do gênero %s, de %d anos de ", genero, idade);
    printf("idade, contratado em %d e que tinha um ", ano_contratacao);
    printf("salário base de R$%f receberá agora um ", salario_base);
    printf("salário de:\nR$%f\n", novo_salario);

    return 0;
}
