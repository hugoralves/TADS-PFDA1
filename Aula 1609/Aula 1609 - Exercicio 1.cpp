/***Dado uma sala com N alunos, criar um algoritmo em linguagem C que fa�a 
a leitura das N notas em um vetor. Ap�s a leitura das N notas dever� 
apresentar a m�dia da sala.
***/

#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define A 3 //definindo constante

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float v[A], i; 
	float media, soma = 0; 
	
	for(i=0; i<A; i++)
	{
		printf("Digite as m�dias dos alunos...: "); 
		scanf("%f", &v[A]); 
	}	
	
	//Processamento de dados
	
		soma = soma + v[A] ; 		 // soma += v[i]	
		media = soma/A;				// media /= A
		
	//Sa�da de dados
	
		printf("\n\nA m�dia geral da sala �...: "); 
		scanf("%f", &media); 

	system("pause"); 
	
}
