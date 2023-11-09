#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  int i;
  int numero;
  int resultado = 0;

  printf("Digite um número:");
  scanf("%i",&numero);

  for(i = 2; i <= numero / 2; i++) {
    if (numero % i == 0){
      resultado++;
      break;
    }
  }

  if (resultado == 0) {
    printf("%i é um número primo \n", numero);
  } else {
    printf("%i não é um número primo \n", numero);
  }

  return 0;
}