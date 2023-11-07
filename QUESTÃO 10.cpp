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

    printf("Digite um primeiro n�mero:");
    scanf("%f", &numeroum);

    printf("Digite um segundo n�mero:");
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
        printf("Op��o inv�lida! \n");
        break;
    }

    printf("Primeiro n�mero: %.1f \n", numeroum);
    printf("Segundo n�mero: %.1f \n", numerodois);
    printf("Op��o escolhida: %c \n", opcao);
    printf("Resultado: %.1f \n", resultado);

    return 0;
}
