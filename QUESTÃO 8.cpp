#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero;
    
    printf("Digite um valor:");
    scanf("%i", &numero);
    printf("\n");

    for (i = numero; i >= 0; i--)
{
printf("- %i \n", i);
}

return 0;

}
