/***
Fa�a um algoritmo que leia um n�mero positivo e inteiro N, some todos os n�meros 
inteiros de 1 a N, e mostre o resultado na tela.

***/

#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, nume; 
	int acumulador = 1;
	
	printf("Digite um n�mero positivo:  \n\n");
	scanf("%i", &num);
	
	while(nume <= num)
	{
		printf(" %i ", nume);
		acumulador += nume; /// acumulador = acumulador + n�mero
		nume++; 
	}
	
	 printf("\n\n Resultado da soma...: %i", acumulador); 
	
	getch(); 
}
