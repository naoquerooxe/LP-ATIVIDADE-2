#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a = 0;
    int numeros;
    int par = 0;
    int impar = 0;
    int somaPar = 0;
    int somaImpar = 0;
    float mediaPar = 0;
    float mediaImpar = 0;

    do
    {
        printf("Informe o %d° número: ", a + 1);
        scanf("%d", &numeros);

        if (numeros > 0)
        {
            a++;

            if (numeros % 2 == 0)
            {
                par++;
                somaPar += numeros;
            }
            else
            {
                impar++;
                somaImpar += numeros;
            }
        }

    } while (numeros >= 0);

    mediaPar = somaPar / par;
    mediaImpar = somaImpar / impar;

    system("cls || clear");

    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de ímpares: %d\n", impar);
    printf("Média de pares: %.2f\n", mediaPar);
    printf("Média de ímpares: %.2f\n", mediaImpar);

    return 0;
}
