#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Escolha de caso

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao; 
	
	printf("MENU DE OP��ES \n"); 
	printf("1 - Cadastrar conta \n"); 
	printf("2 - Entrar na conta \n"); 
	printf("3 - Cancelar conta \n\n"); 
	printf("Escolha uma op��o: \n"); 
	scanf("%i", &opcao); 
	
	switch(opcao)
	{
		case 1: printf("Seja bem-vindo!"); 
				break; 
				
		case 2: printf("Ol�, novamente!"); 
				break;
		
		case 3: printf("Poxa, que triste!"); 
				break; 
				
		default: printf("Eita! N�o identificamos essa op��o. \nTente novamente");
				break;
	}


	getch(); 
	
}
