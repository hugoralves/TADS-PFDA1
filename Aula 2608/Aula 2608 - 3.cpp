#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// O programa vai ler se um n�mero � ou n�o multiplo de 3

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num; 
	
	printf("Digite um n�mero: "); 
	scanf("%i", &num); 
	
	if(num%3 == 0)
	{
		printf("O n�mero � m�ltiplo de tr�s"); 
	}
	else
	{
		printf("O n�mero n�o � m�ltiplo de tr�s");
	}
	
	getch(); 
	
}
