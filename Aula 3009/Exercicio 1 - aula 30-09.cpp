#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "mylib.cpp"

ficha aluno[5];	// aluno � variavel do tipo ficha
 
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	float soma, media; 
	
	for(i=0; i<5; i++)
	{
		printf("\nDigite a sua nota: ");
		scanf("%f", &aluno[i].nota1);	
	}
	
	for(i=0; i<4; i++)
	{
		soma = soma + aluno[i].nota1;
		media = soma/5;
	}

	printf("\n\nA media das notas digitadas �: %f", media);

	return 0;
}


