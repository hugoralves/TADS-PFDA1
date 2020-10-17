/***
Variaveis homogeneas (de um único tipo)
	
	Unidimensionais
		vetores
	Utilidade: quando se quer armazenar, várias informações em uma única variável
	
	tipo variavel[quantidade];
	int v[10]
	
	Bidimensionais
		matrizes
	Utilidades: quando apra uma mesma posição, temos vários valores
			exemplo: para cada aluno, temos nota1, nota2 e a media
			
			tipo varialve [numeroLinhas][numeroColunas]
			float alunos[20][3]
		
***/


#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define A 5 //definindo constante

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int v[A], i; // No caso o valor de A já está definido como 5
	
	//Entrada de dados
	for(i=0; i<A; i++)
	{
		printf("Digite um valor...:  "); 
		scanf("%i", &v[i]);  // No caso aqui voce defini onde voce vai armazenar esse valor do vetor. 
	}
	
	//Processamento de dados 
	
	for(i=0; i<A; i++)
	{
		v[i] = v[i] * 2;
	}

	//Saída de dados
	
	printf("\n\nDados digitados...:  \n"); 
	
	for(i=0; i<A; i++)
		printf("\n%i", v[i]); 

	system("pause");
}
