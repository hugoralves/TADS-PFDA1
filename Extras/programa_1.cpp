#include <conio.h> // são bibliotecas 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	int a;
	char b; // uma só letra
	char nome[50]; // aqui no caso cabe uma palavra de até cinquenta letras
	float comvirgula;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite uma nota:  "); // leitura de dados
	scanf("%f", &comvirgula); // leitura de dados
	
	printf("Digite um nome:  "); 
	scanf("%c", &nome); 
	
	printf("A nota do aluno %c é: %f", nome, comvirgula);
	
	
	getch(); // serve pra pausar a tela
}
