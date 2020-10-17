/***Dado uma sala com N alunos, criar um algoritmo em linguagem C que faça 
a leitura das N notas em um vetor. Após a leitura das N notas deverá 
apresentar a média da sala.
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
		printf("Digite as médias dos alunos...: "); 
		scanf("%f", &v[A]); 
	}	
	
	//Processamento de dados
	
		soma = soma + v[A] ; 		 // soma += v[i]	
		media = soma/A;				// media /= A
		
	//Saída de dados
	
		printf("\n\nA média geral da sala é...: "); 
		scanf("%f", &media); 

	system("pause"); 
	
}
