#include <stdio.h>
int main(void)
{
    float pes, jardas, milhas, polegadas;

    printf("Entre a medida desejada em pés: \n");
    scanf("%f", &pes);
    polegadas = pes * 12.0;
    jardas = pes / 3.0;
    milhas = jardas / 1760.0;

    printf("%.2f pés =\n\t   %.2f polegadas\n\t   %.2f jardas\n\t   %.2f milhas\n", pes,
	   polegadas, jardas, milhas);

    return 0;
}
