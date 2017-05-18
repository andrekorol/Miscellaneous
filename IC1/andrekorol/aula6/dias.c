#include <stdio.h>

typedef enum {false=0, true=1} bool;

bool bissexto(int ano){
    if ( (ano % 400 == 0) || ( (ano % 4 == 0) && !(ano % 100 == 0) ) ){
	       return true;
    }
    else {
	       return false;
    }
}

const char * par_ou_impar(int n)
{
    return (n & 1)?("impar"):("par");
}

int main(int argc, char const *argv[]) {
    int mes, ano;
    const char *nome_mes;
    printf("Entre o mês e o ano: \n");
    scanf("%d %d", &mes, &ano);
    switch (mes) {
        case 1:
        nome_mes = "Janeiro";
        break;

        case 2:
        nome_mes = "Fevereiro";
        break;

        case 3:
        nome_mes = "Março";
        break;

        case 4:
        nome_mes = "Abril";
        break;

        case 5:
        nome_mes = "Maio";
        break;

        case 6:
        nome_mes = "Junho";
        break;

        case 7:
        nome_mes = "Julho";
        break;

        case 8:
        nome_mes = "Agosto";
        break;

        case 9:
        nome_mes = "Setembro";
        break;

        case 10:
        nome_mes = "Outubro";
        break;

        case 11:
        nome_mes = "Novembro";
        break;

        case 12:
        nome_mes = "Dezembro";
        break;

        default:
        nome_mes = "Seu mês";
    }


    if (mes == 2) {
        if (bissexto(ano) == true){
            printf("%s de %d tem 29 dias\n", nome_mes, ano);
        }
        else if (bissexto(ano) == false) {
            printf("%s de %d tem 28 dias\n", nome_mes, ano);
        }
    }
    else if ((mes <= 7) && (par_ou_impar(mes) == "impar")) {
        printf("%s de %d tem 31 dias\n", nome_mes, ano);
    }
    else if ((mes <= 7) && (par_ou_impar(mes) == "par")) {
        printf("%s de %d tem 30 dias\n", nome_mes,ano);
    }
    else if ((mes > 7) && (par_ou_impar(mes) == "par")) {
        printf("%s de %d tem 31 dias\n", nome_mes, ano);
    }
    else{
        printf("%s de %d tem 30 dias\n", nome_mes, ano);
    }

    return 0;
}
