/***

Desenvolver um algoritmo para pedir um mes (em numero) e o programa deverá imprimir na tela o correspondente por extenso

***/

#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num; 
	
	printf("Digite um número:  \n"); 
	scanf("%i", &num); 
	
	if(num%3 == 0 && num > 0)
	{
		printf("O número %i é positivo e múltiplo de 3", num); 
	}
	if(num%3 == 0 && num < 0)
	{
		printf("O número %i é negativo e múltiplo de 3", num); 
	}
	if(num%3 != 0 && num > 0)
	{
		printf("O número %i é positivo, mas não é múltiplo de 3", num);
	}
	if(num%3 != 0 && num < 0)
	{
		printf("O número %i é negativo, mas não é múltiplo de 3", num);
	}
	else
	{
		printf("\n\nObrigado"); 
	}
	
	getch(); 
}
