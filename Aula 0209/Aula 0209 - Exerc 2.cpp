/***

Desenvolver um algoritmo para pedir um mes (em numero) e o programa dever� imprimir na tela o correspondente por extenso

***/

#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num; 
	
	printf("Digite um n�mero:  \n"); 
	scanf("%i", &num); 
	
	if(num%3 == 0 && num > 0)
	{
		printf("O n�mero %i � positivo e m�ltiplo de 3", num); 
	}
	if(num%3 == 0 && num < 0)
	{
		printf("O n�mero %i � negativo e m�ltiplo de 3", num); 
	}
	if(num%3 != 0 && num > 0)
	{
		printf("O n�mero %i � positivo, mas n�o � m�ltiplo de 3", num);
	}
	if(num%3 != 0 && num < 0)
	{
		printf("O n�mero %i � negativo, mas n�o � m�ltiplo de 3", num);
	}
	else
	{
		printf("\n\nObrigado"); 
	}
	
	getch(); 
}
