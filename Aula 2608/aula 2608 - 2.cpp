#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num; 
	
	printf("Digite um número: "); 
	scanf("%i", &num); 
	
	if(num%2 == 1)
	{
		printf("O número é IMPAR"); 
	}
	else
	{
		printf("O número é PAR"); 
	}
	
	getch();
}
