#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// O programa vai ler se um número é ou não multiplo de 3

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num; 
	
	printf("Digite um número: "); 
	scanf("%i", &num); 
	
	if(num%3 == 0)
	{
		printf("O número é múltiplo de três"); 
	}
	else
	{
		printf("O número não é múltiplo de três");
	}
	
	getch(); 
	
}
