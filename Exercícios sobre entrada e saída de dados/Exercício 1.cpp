#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// O programa vai calcular o volume de uma lata de óleo em centímetros cúbicos
int main()

{
	setlocale(LC_ALL, "Portuguese");
	float altura, raio, volume; 
	
	printf("Digite a altura da lata:  ");
	scanf("%f", &altura);
	
	printf("Digite o raio da lata:  ");
	scanf("%f", &raio);
	
	volume = 3.14 * (raio * raio) * altura; 
	
	printf("O volume da lata é de:  %3.f centímetros cúbicos", volume); 
	
	getch();
	
}
