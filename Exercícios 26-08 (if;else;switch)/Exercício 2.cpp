#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// O programa vai estipular o peso ideal de um homem e de uma mulher dada sua altura 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	 
	float alt, hom, mul;
	int sex; 
	
	printf("Para saber o seu peso ideal informe sua altura: \n\n");  
	scanf("%f", &alt); 
	
	printf("\n\nQual o seu sexo? \n\n 1 - Masculino\n 2 - Feminino \n\n");
	scanf("%i", &sex); 
	
	switch(sex)
	{
		case 1 : printf("\n\nMASCULINO");
	    		 hom = 72.7 * alt - 58; 	 
				 printf("\nO seu peso ideal é %.3f Kg", hom); 
				 break;

		case 2 : printf("\n\nFEMININO");
				 mul = 62.1 * alt - 44.7; 
				 printf("\nO seu peso ideal é %.3f Kg", mul);
				 break; 

		default : printf("\nOps, não identificamos essa opção :(");
    }
	
	getch();
}
