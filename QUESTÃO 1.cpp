#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

int clima;


 printf("Digite a temperatura: \n");
 scanf("%d",&clima);

 system("cls || clear");

 printf("Clima atual: %d \n",clima);

 if (clima >= 25)
 {
    printf("Est� ensolarado.");
 }else if (clima <= 15)
 {
    printf("Est� chuvoso.");
 }else{
    printf("Est� nublado.");
 }
 return 0;
 
}
