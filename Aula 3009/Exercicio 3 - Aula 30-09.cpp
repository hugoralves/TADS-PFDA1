/***
 Implemente um programa que leia o nome, a idade e o enderec�o de uma pessoa e
armazene os dados em uma estrutura
*///

#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Vari�veis 

typedef struct 
{
	char nome [50]; 
	int idade; 
	char endereco[100];
	
}cadastro; 

cadastro cad; 

//Corpo 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o seu nome completo: "); 
	fflush(stdin);
	gets(cad.nome); 
	
	printf("\nDigite a sua idade: "); 
	scanf("%i", &cad.idade); 
	
	printf("\nDigite o seu endere�o: "); 
	fflush(stdin);
	gets(cad.endereco); 
	
	printf("\n\nNome completo: %s  \n\nIdade: %i  \n\nEndere�o: %s", cad.nome, cad.idade, cad.endereco); 
	
	return 0; 
}
