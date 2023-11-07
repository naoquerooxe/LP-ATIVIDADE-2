#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf(" | CODIGO |  PRODUTO   |\n");
    printf(" |   1    |  Camiseta  |\n");
    printf(" |   2    |  Calça     |\n");
    printf(" |   3    |  Sapato    |\n");
    printf("--------------*------*-- \n");

    printf("Digite o cÓdigo do idioma escolhido:");
    scanf("%i", &opcao);
    
    system("cls");

    switch (opcao)
    {
    case 1:
    	printf("CÓDIGO: 1 \n");
    	printf("Produto: Camiseta \n");
    	printf("Preço: R$ 20,00\n");
    	break;
    case 2:
    	printf("CÓDIGO: 2 \n");
    	printf("Produto: Calça \n");
    	printf("Preço: R$ 40,00 \n");
    
    	break;
    case 3:
    	printf("CÓDIGO: 3 \n");
    	printf("Produto: Sapato \n");
    	printf("Preço: R$ 60.00 \n");
    
    	break;
    default:
    printf("Opção inválida! \n");
    break;
}
    	
    	return 0;
    }
