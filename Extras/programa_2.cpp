#include <conio.h> // s�o bibliotecas 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	int a;
	char b; // uma s� letra
	char nome[50]; // aqui no caso cabe uma palavra de at� cinquenta letras
	float comvirgula;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite uma nota:  "); // leitura de dados
	scanf("%f", &comvirgula); // leitura de dados
	
	printf("Digite um nome:  "); 
	scanf("%c", &nome); 
	
	printf("A nota do aluno %c �: %f", nome, comvirgula);
	
	
	getch(); // serve pra pausar a tela
}
