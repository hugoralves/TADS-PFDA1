#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// O programa vai ler um n�mero e retornar o dobro e o quadrado dele

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	float numero, dobro, quadrado; 
	
	printf("Digite um n�mero:  ");
	scanf("%f", &numero); 
	
	dobro = 2 * numero;
	quadrado = numero * numero;
	
	printf("O dobro do n�mero �: %2.f \n", dobro); 
	printf("O quadrado do n�mero �: %2.f  \n", quadrado);
	
	getch();
	
}
