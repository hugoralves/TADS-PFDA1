#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h> 

// O programa vai calcular uma um número (base) elevado a outro (expoente)
// Por isso foi adicionada a biblioteca de matemática (math.h) para ajudar no cálculo

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int base, exp, res; 
	
	printf("Digite o número da base:  "); 
	scanf("%i", &base); 
	
	printf("Digite o número do expoente:   "); 
	scanf("%i", &exp); 
	
	res = pow(base, exp); 
	
	printf("%i elevado a %i é igual a:  %i", base, exp, res); 
	
	
	getch();
}
