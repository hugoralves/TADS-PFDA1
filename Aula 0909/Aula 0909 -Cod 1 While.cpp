#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N=0, i=10;
	
	while(i >= N)   // antes de entrar no LOOP é feito o teste da condição
	{
		printf("%i ", i);
		i -= 2;					// i = i -2
	}
	printf("\n\nUltimo valor de 'i' é %i", i);
	
	getch();
}
