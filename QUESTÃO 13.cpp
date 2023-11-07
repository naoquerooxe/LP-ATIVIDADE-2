#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeroum;
    int numerodois;
    
    printf("Digite o primeiro número:");
    scanf("%i", &numeroum);
    
    printf("Digite o segundo número:");
    scanf("%i", &numerodois);
    
    printf("\n");
    
    if (numeroum > numerodois) {
    	printf("O primeiro número é o maior número! \n");
    	printf("O segundo número é o menor número! \n");
	} else {
		printf("O segundo número é o maior número! \n");
		printf("O primeiro número é o menor número! \n");
	}
	
	return 0;
	
}
