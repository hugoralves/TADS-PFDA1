#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// O programa vai ler um número e retornar o dobro e o quadrado dele

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	float numero, dobro, quadrado; 
	
	printf("Digite um número:  ");
	scanf("%f", &numero); 
	
	dobro = 2 * numero;
	quadrado = numero * numero;
	
	printf("O dobro do número é: %2.f \n", dobro); 
	printf("O quadrado do número é: %2.f  \n", quadrado);
	
	getch();
	
}
