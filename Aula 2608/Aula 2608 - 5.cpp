#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Escolha de caso

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao; 
	
	printf("MENU DE OPÇÕES \n"); 
	printf("1 - Cadastrar conta \n"); 
	printf("2 - Entrar na conta \n"); 
	printf("3 - Cancelar conta \n\n"); 
	printf("Escolha uma opção: \n"); 
	scanf("%i", &opcao); 
	
	switch(opcao)
	{
		case 1: printf("Seja bem-vindo!"); 
				break; 
				
		case 2: printf("Olá, novamente!"); 
				break;
		
		case 3: printf("Poxa, que triste!"); 
				break; 
				
		default: printf("Eita! Não identificamos essa opção. \nTente novamente");
				break;
	}


	getch(); 
	
}
