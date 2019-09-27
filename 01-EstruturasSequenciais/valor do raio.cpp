#include <stdio.h>
#include <stdlib.h>

float pi = 3.14159;
float raio, area;

int main() {

        printf("\n  Qual o valor do raio: ");
        scanf("%f", &raio);

        area = pi * (raio * 2);

        printf("\n\n\n\n\n");
        printf("\n  ------------------------------------------------------------------------------");
        printf("  | CODIGO: %f              ",raio);
        printf(" | NUMERO: %f               ",area);
        printf("\n  ------------------------------------------------------------------------------");

        printf("\n O valor da Area e de: %f", area);
}
