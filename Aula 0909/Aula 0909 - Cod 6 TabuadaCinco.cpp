#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*** 

Exercicio: Fa�a um c�digo em linguagem C, que utilizando o loop 
             'for' que imprima na tela a tabuada do 5
***/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a; 
	
	for (a = 0; a < 10;  a++)
		printf("%i x %i = %i\n\n", 5, a, 5*a);
		
	system ("pause");
}
