#include <stdio.h>
#include <stdlib.h>

//variaveis para pegar codigo, numero e valor de pecas
int codigo1;
float num1,valor1;
int codigo2;
float num2,valor2;
float total;


int main() {

printf("\n Qual e o codigo da peca 1: ");
scanf("%i", &codigo1);
printf("\n Qual o numero de pecas no estoque 1: ");
scanf("%f", &num1);
printf("\n Qual e o valor de cada peca: ");
scanf("%f",&valor1);

printf("\n Qual o codigo da peca 2: ");
scanf("%i", &codigo2);
printf("\n Qual o numero de pecas no estoque 2: ");
scanf("%f", &num2);
printf("\n Qual e o valor de cada peca: ");
scanf("%f", &valor2);

total = (num1 * valor1) + (num2 * valor2);

printf("\n\n\n\n\n");
printf("\n  ------------------------------------------------------------------------------");
printf("  | CODIGO: %i              ",codigo1);
printf(" | NUMERO: %f               ",num1);
printf(" | VALOR: %f            |",valor1);
printf("\n  ------------------------------------------------------------------------------");
printf("  | CODIGO: %i              ",codigo2);
printf(" | NUMERO: %f               ",num2);
printf(" | VALOR: %f            |",valor2);
printf("\n  ------------------------------------------------------------------------------");
printf(" | VALOR TOTAL: %f |", total);
printf("\n  -----------------------");
}//fim da main

