#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Digite uma nota:  "); 
	scanf("%f", &nota1); 
	
	printf("Digite uma segunda nota:  "); 
	scanf("%f", &nota2); 
	
	media = (nota1+nota2)/2;
	
	printf("A m�dia das duas notas �: %.2f", media);
	
	
	getch(); 
}
