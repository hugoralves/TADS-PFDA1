#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/***

Faça um algoritmo que imprima o quadrado de todos os números inteiros entre 15 e 200

***/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a; 
	
	for(a = 15; a <=200; a++)
		printf("%i ", a*a); 
	
	system("pause"); 
}
