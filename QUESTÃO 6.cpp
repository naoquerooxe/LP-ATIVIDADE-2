#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf(" | CODIGO |  IDIOMA   |\n");
    printf(" |   1    |  ingl�s   |\n");
    printf(" |   2    |  espanhol |\n");
    printf(" |   3    |  franc�s  |\n");
    printf("--------------*------*-- \n");

    printf("Digite o c�digo do idioma escolhido:");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
    	printf("Welcome! \n");
    	break;
    case 2:
    	printf("Bienvenido! \n");
    	break;
    case 3:
    	printf("Accueillir! \n");
    	break;
    default:
    printf("Op��o inv�lida! \n");
    break;
}
    	
    	return 0;
    }
