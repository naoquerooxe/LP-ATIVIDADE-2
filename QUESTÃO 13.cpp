#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeroum;
    int numerodois;
    
    printf("Digite o primeiro n�mero:");
    scanf("%i", &numeroum);
    
    printf("Digite o segundo n�mero:");
    scanf("%i", &numerodois);
    
    printf("\n");
    
    if (numeroum > numerodois) {
    	printf("O primeiro n�mero � o maior n�mero! \n");
    	printf("O segundo n�mero � o menor n�mero! \n");
	} else {
		printf("O segundo n�mero � o maior n�mero! \n");
		printf("O primeiro n�mero � o menor n�mero! \n");
	}
	
	return 0;
	
}
