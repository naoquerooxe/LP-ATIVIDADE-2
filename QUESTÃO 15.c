#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    int valor;
    int medida;
    int resposta;
    int resultado;

    
    printf("Escolha a forma de medida\n");
    printf("1 - Milhas\n");
    printf("2 - Quilômetros\n");
    printf("3 - Fahrenheit\n");
    printf("4 - Celsius\n");
    printf("Digite: ");
    scanf("%i", &medida);

    printf("Digite o valor da medida solicitada: ");
    scanf("%i", &valor);
    
    switch (medida)
    {
    case 1:
    printf("Deseja converter para Quilometros?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%i", &resposta);

    if (resposta == 1)
    {
        resultado = valor * 1.6;
    } else {
        resultado = valor;
    }
        break;

    case 2:
    printf("Deseja converter para Milhas?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%i", &resposta);

    if (resposta == 1)
    {
        resultado = valor / 1.6;
    } else {
        resultado = valor;
    }
        break;

    case 3:
    printf("Deseja converter para Celsius?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%i", &resposta);

    if (resposta == 1)
    {
        resultado = (valor / 1.8) - 32;
    } else {
        resultado = valor;
    }
        break;

    case 4:
    printf("Deseja converter para Fahrenheit?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%i", &resposta);

    if (resposta == 1)
    {
        resultado = (valor * 1.8) + 32;
    } else {
        resultado = valor;
    }
        break;

    default:
        printf("Não reconhecido");
        break;
    }

    printf("\n1 - Milhas\n");
    printf("2 - Quilômetros\n");
    printf("3 - Fahrenheit\n");
    printf("4 - Celsius\n");
    printf("Medida Selecionada: %i\n", medida);
    printf("Valor: %i\n", valor);
    printf("Resultado: %i\n", resultado);


    return 0;
}
