/******
 Fa�a um C�digo que calcule a m�dia aritm�tica de 2 notas float para 
 uma sala com 3 alunos
*****/

#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, med; 
	int numeroAluno = 0; 
	while(numeroAluno < 3)
	{
	printf("Digite a sua primeira nota:  \n\n"); 
	scanf("%f", &n1); 
	printf("Digite a sua segunda nota:  \n\n"); 
	scanf("%f", &n2); 
	
	med = (n1+n2)/2; 
	
	printf(" A m�dia de %f e de %f � de %.2f \n\n", n1, n1, med); 
	numeroAluno++; 
    }
    
	getch(); 
}
