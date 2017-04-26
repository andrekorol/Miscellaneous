#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char answer[50];
    int ano;
    printf("Entre um ano: \n");
    scanf("%d", &ano);
 
    if ( (ano % 400 == 0) || ( (ano % 4 == 0) && (ano % 100 != 0) ) ){
	strcpy(answer,"Esse ano é bissexto");
    }
    else {
	strcpy(answer,"Esse ano não é bissexto");
    }

    printf("%s\n", answer);
    //puts(answer);
}
