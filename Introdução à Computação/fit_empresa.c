#include <stdio.h>

int main(){
	double idade,sexo,sal,ano,a,s;
	char m,f;

	printf("Reajuste salarial\n");
	printf("Idade: ");
	scanf(" %lf", &idade);
	printf("Sexo [m/f]: ");
	scanf("  %lf", &sexo);
	printf("Salário base: \n");
	scanf(" %lf", &sal);
	printf("Ano de contratação: \n");
	scanf(" %lf", &ano);
	a = 2017 - ano;


		if(idade>=18 && idade<=39){
			else if(sexo=='m'){
				if(a<=10){
					s=(sal*0.1)-10;
					printf("Novo salário: %lf",s);
					}
				else if(a>10){
					s=(sal*0.1)+17;
					printf("Novo salário: %lf",s);
					}
				}
			else if(sexo=='f'){
				if(a<=10){
					s=(sal*0.08)-11;
					printf("Novo salário: %lf",s);
					}
				else if(a>10){
					s=(sal*0.08)+16;
					printf("Novo salário: %lf",s);
					}
				}
			}
		else if(idade>=40 && idade<=69){
			if(sexo=='m'){
				if(a<=10){
					s=(sal*0.08)-5;
					printf("Novo salário: %lf",s);
					}
				else if(a>10){
					s=(sal*0.08)+15;
					printf("Novo salário: %lf",s);
					}
				}
			else if(sexo=='f'){
				if(a<=10){
					s=(sal*0.1)-7;
					printf("Novo salário: %lf",s);
					}
				else if(a>10){
					s=(sal*0.1)+14;
					printf("Novo salário: %lf",s);;
					}
				}
			}
		else if(idade>=70 && idade<=99){
			if(sexo=='m'){
				if(a<=10){
					s=(sal*0.15)-15;
					printf("Novo salário: %lf",s);
					}
				else if(a>10){
					s=(sal*0.15)-13;
					printf("Novo salário: %lf",s);
					}
			}
			else if(sexo=='f'){
				if(a<=10){
					s=(sal*0.17)-17;
					printf("Novo salário: %lf",s);
					}
				else if(a>10){
					s=(sal*0.17)+12;
					printf("Novo salário: %lf",s);
					}
				}
			}
		else{
			printf("Menor de idade");
		}

return 0;
}
