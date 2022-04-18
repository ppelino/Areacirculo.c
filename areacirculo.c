#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float raio, pi=3.14, area;

    printf("Digite o valor do circulo: ");
    scanf("%f", &raio);
    area = (pi * raio * raio);
    printf("AREA = %.2f m2 \n", area);

    return 0;
}
