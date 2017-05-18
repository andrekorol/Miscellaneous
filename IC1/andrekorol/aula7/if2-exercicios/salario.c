
#include <stdio.h>

int main (void) {
    long double salario_minimo, salario_bruto, salario_liquido, limite_IRPF;
    long double preco_LED, preco_LCD, comissao;
    unsigned int televisores_LED, televisores_LCD;
    
    printf("Entre o valor do salario minimo: \n");
    scanf(" %Lf", &salario_minimo);
    printf("Entre o valor limite de isencao do IRPF: \n");
    scanf(" %Lf", &limite_IRPF);
    printf("Entre o preco do televisor de LED: \n");
    scanf(" %Lf", &preco_LED);
    printf("Entre o preco do televisor de LCD: \n");
    scanf(" %Lf", &preco_LCD);
    printf("Entre o numero de televisores de LED vendidos: \n");
    scanf(" %ud", &televisores_LED);
    printf("Entre o numero de televisores de LCD vendidos: \n");
    scanf(" %ud", &televisores_LCD);
    
    if (televisores_LED >= 10) {
        comissao = (14.0 / 100.0) * preco_LED; 
    }
    else if (televisores_LED < 10) {
        
    }
    return 0; 


  }
