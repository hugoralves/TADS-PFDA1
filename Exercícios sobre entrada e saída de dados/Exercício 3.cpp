#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h> 

// O programa vai calcular uma um n�mero (base) elevado a outro (expoente)
// Por isso foi adicionada a biblioteca de matem�tica (math.h) para ajudar no c�lculo

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int base, exp, res; 
	
	printf("Digite o n�mero da base:  "); 
	scanf("%i", &base); 
	
	printf("Digite o n�mero do expoente:   "); 
	scanf("%i", &exp); 
	
	res = pow(base, exp); 
	
	printf("%i elevado a %i � igual a:  %i", base, exp, res); 
	
	
	getch();
}
