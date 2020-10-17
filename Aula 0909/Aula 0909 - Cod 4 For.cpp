#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/****

	for(A   ; B   ; C   )
	{
		......
	}

	A = Inicialização das variaveis de controle
	B = até quando isso irá rodar, quantidade de vezes do loop
	C = Incremento / Decremento
	
****/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i; 
	
	for( i=0; i<10; i++)
		printf("%i\n", i); // nesse caso nõa se faz necessário as chaves, pq só tem uma linha
}
	
	getch();
}
