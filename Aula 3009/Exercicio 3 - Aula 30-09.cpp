/***
 Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura
*///

#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Variáveis 

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
	
	printf("\nDigite o seu endereço: "); 
	fflush(stdin);
	gets(cad.endereco); 
	
	printf("\n\nNome completo: %s  \n\nIdade: %i  \n\nEndereço: %s", cad.nome, cad.idade, cad.endereco); 
	
	return 0; 
}
