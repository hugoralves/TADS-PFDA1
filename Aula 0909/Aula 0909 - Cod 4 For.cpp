#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/****

	for(A   ; B   ; C   )
	{
		......
	}

	A = Inicializa��o das variaveis de controle
	B = at� quando isso ir� rodar, quantidade de vezes do loop
	C = Incremento / Decremento
	
****/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i; 
	
	for( i=0; i<10; i++)
		printf("%i\n", i); // nesse caso n�a se faz necess�rio as chaves, pq s� tem uma linha
}
	
	getch();
}
