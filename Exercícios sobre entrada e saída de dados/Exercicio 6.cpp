#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

// O programa vai calcular o reajuste de 25% em cima do sal�rio de uma pessoa

int main() 
{ 
	setlocale(LC_ALL, "Portuguese");
	
	float sal, salr; 
	
	printf("Digite o seu sal�rio: R$ "); 
	scanf("%f", &sal); 
	
	salr = sal * 1.25;
	
	printf("O novo sal�rio com o reajuste � de R$ %2.f", salr);

	getch(); 
}
