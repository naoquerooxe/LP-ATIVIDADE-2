#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("   _____              \n");
    printf("-> | 1 | NOVO JOGO    \n");
    printf("   _____              \n");
	printf("-> | 2 | CARREGAR JOGO\n");
    printf("   _____              \n");
	printf("-> | 3 | CONFIGURA��OES\n");


    printf("\n");
	printf("Digite o c�digo da sua op��o:");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
    	printf("Carregando novo jogo... \n");
    break;
	case 2:
	printf("Carregando jogo... \n");
	break;
	case 3:
	printf("Entrando nas configura��es... \n");
	break;
	default:
		printf("Op��o inv�lida. Tente Novamente. \n");
		
	break;
}
	
	return 0;
}
