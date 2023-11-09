#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero;
    float soma = 0;
    float media;
    int contador = 0;
  int quantidade;

  printf("Digite a quantidade de notas:");
  scanf("%i" , &quantidade);

    do
    {
        printf("Digite o %dª valor: ", contador + 1);
        scanf("%f", &numero);
        if (numero > 0)
        {
            soma += numero;
            contador++;
        }

    } while (numero < quantidade);

    media = soma / contador;

    printf("Soma: %.1f \n", soma);
    printf("Média: %.2f \n", media);

    return 0;
}
