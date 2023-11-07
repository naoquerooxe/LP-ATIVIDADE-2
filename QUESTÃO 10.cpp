#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float numeroum;
    float numerodois;
    char opcao;
    float resultado;

    printf("Digite um primeiro número:");
    scanf("%f", &numeroum);

    printf("Digite um segundo número:");
    scanf("%f", &numerodois);

    fflush(stdin);
    
    printf("\n");

    printf("Digite + para somar \n");
    printf("Digite - para subtrair \n");
    printf("Digite * para multiplicar \n");
    printf("Digite / para dividir \n");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case '+':
        resultado = numeroum + numerodois;
        break;

    case '-':
        resultado = numeroum - numerodois;
        break;

    case '*':
        resultado = numeroum * numerodois;
        break;

    case '/':
        resultado = numeroum / numerodois;
        break;

    default:
        printf("Opção inválida! \n");
        break;
    }

    printf("Primeiro número: %.1f \n", numeroum);
    printf("Segundo número: %.1f \n", numerodois);
    printf("Opção escolhida: %c \n", opcao);
    printf("Resultado: %.1f \n", resultado);

    return 0;
}
