#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  float ValorFinal = 0 ;
  float compra = 0;
  int dia;

  printf("Digite o valor da sua compra: ");
  scanf("%f", &compra);

  do {
    printf("\n");
    printf("Informe em qual dia a compra foi realizada\n");
    printf("1 - Dia de Semana\n");
    printf("2 - Fim de Semana\n");
    scanf("%d", &dia);

    switch (dia) {

    case 1:

      if (compra > 100) {
        ValorFinal = compra - (compra * 0.10);
        printf("*Desconto Adquirido: 10%");

      } else {
        ValorFinal = compra;
      }
      break;

    case 2:

      if (compra > 100) {
        ValorFinal = compra - (compra * 0.15);
      printf("*Desconto Adquirido: 15%");

      } else {
        ValorFinal = compra;
      }
      break;

    default:
      printf("Opção inválida. \n");
      break;
    }

  } while (dia < 1 || dia > 2);

  printf("\n");
  printf("Valor da compra: %.2f\n", compra);
  printf("\n");
  printf("Valor final da compra: %.2f\n", ValorFinal);

  return 0;
}