#include <stdio.h>
#include <stdlib.h>

float dog = 4;
float salada = 4.5;
float bacon = 5;
float torrada = 2;
float refri = 1.5;
int codigo;
int qtd;
int total;

int main (){

        printf("   ---------------------------------------------------------");
        printf("\n   | CODIGO          ESPECIFICACAO           PRECO         |");
        printf("\n   | 1               Cachorro Quente         RS 4.00       |");
        printf("\n   | 2               X-Salada                RS 4.50       |");
        printf("\n   | 3               X-Bacon                 RS 5.00       |");
        printf("\n   | 4               Torrada Simples         RS 2.00       |");
        printf("\n   | 5               Refrigerantes           RS 1.50       |");
        printf("\n   ---------------------------------------------------------");
        printf("\n\n");

        printf(" Qual o codigo do lanche: ");
        scanf("%i", &codigo);

        printf(" Quantidade: ");
        scanf("%i", &qtd);

        switch(codigo){
                      case 1:
                            total = qtd * dog;

                            printf(" O valor total da compra e de: %i", total);
                            printf("\n\n\n\n");

                      break;

        }//Fim switch

}//Fim main
