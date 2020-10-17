	/***
	1. while
	========
		.....
		while(condicao)
		{
			........
		}
		.....
		
		observação: 
		
		   A) em "condicao" deve haver uma sintaxe boleana (retorna FALSE/TRUE)
				if(10 > 12)
				{
					bla bla bla bla
				}
			B) cuidado com a condição, pode travar maquina
				A = 10;
				B = 8;
				while(A > B)
				{
					printf("oi");
					B++;    // B = B + 1;
							// B += 2;
							// B *= 5;
				}
				......
				
				A -> 10
				B -> 8 -> 9 -> 10
				Tela: oi oi 
				
	***/
	
#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B;
	
	A = 0; 
	B = 10; 
	
	while(A < B)
	{
		printf("%i", A); 
		A++;
	}
	
	getch(); 
}






















