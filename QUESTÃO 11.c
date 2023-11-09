#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  int codigo;

  do {
    printf("Digite o código de acesso: \n");
    scanf("%i", &codigo);
    printf("\n");
  } while (codigo != 12345);

  printf("\n");
  printf("Acesso Permitido!");

  return 0;
}
