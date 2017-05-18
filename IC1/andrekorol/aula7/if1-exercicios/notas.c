#include <stdio.h>

int main(void) {
    float p1, p2, media;
    printf("Entre a primeira nota:\n");
    scanf(" %f", &p1);
    printf("Entre a segunda nota:\n");
    scanf(" %f", &p2);

    if ( (p1 > 0.0 && p1 < 10.0) && (p2 > 0.0 && p2 < 10.0) ) {
        media = (p1 * (40.0 / 100.0)) + (p2 * (60.0 / 100.0));
        printf("A média das notas %f e %f é igual a %f\n", p1, p2, media);
    }
    else{
        return 0;
    }
    return 0;
}
