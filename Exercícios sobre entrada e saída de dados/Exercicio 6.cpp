#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

// O programa vai calcular o reajuste de 25% em cima do salário de uma pessoa

int main() 
{ 
	setlocale(LC_ALL, "Portuguese");
	
	float sal, salr; 
	
	printf("Digite o seu salário: R$ "); 
	scanf("%f", &sal); 
	
	salr = sal * 1.25;
	
	printf("O novo salário com o reajuste é de R$ %2.f", salr);

	getch(); 
}
