#include <stdio.h>
int main(void)
{
    int nascimento, ano_atual, idade;
    printf("Entre o seu ano de nascimento: \n");
    scanf("%d", &nascimento);
    printf("Entre o ano atual: \n");
    scanf("%d", &ano_atual);
    
    idade = ano_atual - nascimento;
    if (idade == 1)
	printf("Você tem %d ano de idade\n", idade);
    else if (idade > 1)
	printf("Você tem %d anos de idade ou então fará %d anos ainda esse ano\n", idade, idade);
    else if (idade == 0)
	printf("Você nasceu nesse ano e já está usando um computador?! Wow!!\n");
    else 
	printf("Verifique os anos que você inseriu no programa. É impossível alguém ter nascido em %d e estarmos em %d!\n", nascimento, ano_atual);

	
    return 0;
}
