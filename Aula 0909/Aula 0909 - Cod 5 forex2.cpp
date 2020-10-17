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
	
	int i, j;
	
	for( i=0, j=10; i<10; i++, j -=2)
		printf("%i - %i\n", i, j); // nesse caso nõa se faz necessário as chaves, pq só tem uma linha
}
	
	getch();
}
