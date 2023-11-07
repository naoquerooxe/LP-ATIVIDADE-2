#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float nota;
    
    printf("Digite a sua nota:");
    scanf("%f", &nota);
    
    system ("cls");
    
    printf("Nota: %.2f \n ", nota);
    
    if (nota >= 9 && nota <= 10) {
    	printf("Excelente! \n");
    } else if (nota >= 7 && nota <= 8.9){
	  printf("Bom! \n");
	} else if (nota >= 5 && nota <= 6.9){
	  printf("Razoável. \n");
	} else if (nota < 5) {
		printf("Insuficiente! \n");
	} else {
		printf("Opção inválida! \n");
	}
	
	return 0;
	
}
