#include <stdio.h>
#include <math.h>
int main(void)
{
    float raio, area;
    
    printf("Entre o raio do círculo: \n");
    scanf("%f", &raio);

    area = M_PI * (raio * raio);
    
    printf("A área do círculo de raio %2.f é de %.2f\n", raio, area);

    return 0;
}
