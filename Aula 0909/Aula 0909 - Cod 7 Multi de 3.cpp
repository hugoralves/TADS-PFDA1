#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*** 

Exercicio:  Fa�a um algoritmo que imprima na tela todos os m�ltiplos de 3 entre 0 e 100

***/

int main()
{
	int a;
	
	for(a = 0; a < 100; a+=3)
		printf("%i \n\n", a); 
		
	system ("pause"); 
}

/***
O problema desse c�digo � que ele falha se o valor de a for outro; 
Para corrigir isso, teria que usar if e o resto

***/

