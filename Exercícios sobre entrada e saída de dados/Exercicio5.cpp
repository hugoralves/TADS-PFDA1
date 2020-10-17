#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

// O programa vai calcular o salário líquido de uma pessoas com base em seu salário bruto mais os descontos. 
		// Os descontos vão ser 8,5% da previdencia e 27,5% do IR

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	float bru, liq, pre, ir;
	
	printf("Digite o seu salário bruto:R$ "); 
	scanf("%f", &bru);
	
	liq = ((bru * 0.915) * 0.725);
	pre = (bru * 0.085); 
	ir = (bru * 0.275); 
	
	printf("\n O salário líquido é de: R$ %.2f \n\n O valor descontado da previdência é de: R$ %.2f \n\n O valor descontado do IR é de: R$ %.2f", liq, pre, ir);
	
	getch(); 
}
