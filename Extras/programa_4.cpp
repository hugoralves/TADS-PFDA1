#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/**

&&   (E) >>> ambos tem que ser verdadeiro para o resultado ser verdadeiro
||   (OU) >> pelo menos um dos dois tem que ser verdadeiro
!    (N�O) > vai negar a afirma��o

==========================
Estruturas de sele��o 

if >>> testa uma condi��o 
		s� entra dentro do bloco do if, se a condi��o dele for verdadeira
		Exemplo: 
		
		if(condi��o)
		{
			c�digo de condi��o (s� roda se a condi��o for verdadeira)
		}
		
		c�digo normal

**/

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B; 
	
	A = 10;
	B = 20;
	
	if (A > B);
	{
		printf("Ol�");
		
	}
	
	printf("\n Saindo...\n");
	
	
	getch(); 
}
