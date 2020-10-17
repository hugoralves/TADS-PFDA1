#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int nas, ano, idade, mes, sem, dia; 
	
	printf("Digite o ano atual: "); 
	scanf("%i", &ano);
	
	printf("Digite o ano em que você nasceu: "); 
	scanf("%i", &nas);
	
	idade = ano - nas; 
	mes = idade * 12; 
	sem = idade * 52; 
	dia = idade * 365; 
	
	printf("\n\nA sua idade é: %i anos \n \nVocê tem: \n \n %i meses de vida \n %i semanas de vida \n %i dias de vida", idade, mes, sem, dia);
	
	
	getch();
}
