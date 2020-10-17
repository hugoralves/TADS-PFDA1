#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// faça uma estrutura de controle para um campeonado de natação para uma escola.
//A classificação será baseada na idade da criança sendo que:
// de  0 a 5 anos: bebe
// 6 a 10 anos: infantil
//10 a 15 anos: infato-juvenil
// 15 a 18 anos: adolescente

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade; 
	
	printf("SEJA BEM VINDO AO CAMPEONATO DE NATAÇÃO \n\nPara continuar informe sua idade:  \n"); 
	scanf("%i", &idade); 
	
	switch(idade)
	{
		case 1: 
		case 2: 
		case 3: 
		case 4: 
		case 5: printf("Por voce ser um bebe, infelizmente não pode participar do campeonato");
				break;
		case 6: 
		case 7: 
		case 8: 
		case 9: 
		case 10: printf("Para o público infantil será necessário o termo assinado pelos pais!"); 
				 break; 
		case 11: 
		case 12: 
		case 13: 
		case 14: 
		case 15: printf("As competições para o público infanto-juvenil podem ser feitas por times!"); 
				 break; 
		case 16: 
		case 17: 
		case 18: printf("Para o público adolescente o prêmio vem em dinheiro!"); 
				 break;
		default: printf("Eita, tem algo de errado com a sua idade... Tente novamente!"); 
				 break;
	}
	
	getch();
}
