#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

// O programa vai calcular o sal�rio l�quido de uma pessoas com base em seu sal�rio bruto mais os descontos. 
		// Os descontos v�o ser 8,5% da previdencia e 27,5% do IR

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	float bru, liq, pre, ir;
	
	printf("Digite o seu sal�rio bruto:R$ "); 
	scanf("%f", &bru);
	
	liq = ((bru * 0.915) * 0.725);
	pre = (bru * 0.085); 
	ir = (bru * 0.275); 
	
	printf("\n O sal�rio l�quido � de: R$ %.2f \n\n O valor descontado da previd�ncia � de: R$ %.2f \n\n O valor descontado do IR � de: R$ %.2f", liq, pre, ir);
	
	getch(); 
}
