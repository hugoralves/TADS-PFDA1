#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// O programa vai converter uma temperatura Celsius em Fahrenheit usando a fórmula: F = (ºC*1.8)+32

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float cel, far; 
	
	printf("Digite a temperatura em Celsius: "); 
	scanf("%f", &cel); 
	
	far = (cel*1.8) + 32; 
	
	printf("Essa temperatura em Fahrenheit equivale a: %2.f F", far); 
	
	getch(); 
}
