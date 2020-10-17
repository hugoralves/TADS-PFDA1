#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/**

&&   (E) >>> ambos tem que ser verdadeiro para o resultado ser verdadeiro
||   (OU) >> pelo menos um dos dois tem que ser verdadeiro
!    (NÃO) > vai negar a afirmação

==========================
Estruturas de seleção 

if >>> testa uma condição 
		só entra dentro do bloco do if, se a condição dele for verdadeira
		Exemplo: 
		
		if(condição)
		{
			código de condição (só roda se a condição for verdadeira)
		}
		
		código normal

**/

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B; 
	
	A = 10;
	B = 20;
	
	if (A > B);
	{
		printf("Olá");
		
	}
	
	printf("\n Saindo...\n");
	
	
	getch(); 
}
