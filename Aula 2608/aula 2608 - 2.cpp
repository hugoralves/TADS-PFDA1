#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num; 
	
	printf("Digite um n�mero: "); 
	scanf("%i", &num); 
	
	if(num%2 == 1)
	{
		printf("O n�mero � IMPAR"); 
	}
	else
	{
		printf("O n�mero � PAR"); 
	}
	
	getch();
}
