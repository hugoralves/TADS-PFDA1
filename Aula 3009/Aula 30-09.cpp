#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "mylib.cpp"

ficha aluno;	// aluno é variavel do tipo ficha
 
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite o seu nome: ");
	
	fflush(stdin);	// limpar buffer do teclado
	gets(aluno.nome);
	
	printf("\nDigite a sua idade: ");
	scanf("%i", &aluno.idade);
	printf("\nDigite a sua nota: ");
	scanf("%f", &aluno.nota1);	
	
	printf("%s - %i - %f", aluno.nome, aluno.idade, aluno.nota1);

	return 0;
}



