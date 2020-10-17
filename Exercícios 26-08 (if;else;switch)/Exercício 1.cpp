#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//O programa dever ler a senha do usuário e mostrá-la em asterisco 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int conta,d1, d2, d3, d4, opc;
	
	printf("\t\t BEM VINDO AO BANCO DO IF \n\n Para continuar informe sua conta: "); 
	scanf("%i", &conta); 
	
	printf("\n\nAgora você irá informar a sua senha \n*A mesma senha numérica de quatro dígitos utilizada também no seu cartão\n\nSenha: "); 
	d1 = getch(); //Vai ocultar o digito
	printf("*");  //Vai mostrar o asterisco no lugar do digito
	d2 = getch(); 
	printf("*");
	d3 = getch(); 
	printf("*");
	d4 = getch(); 
	printf("*");
	
	if(d1 =='1' && d2 == '3' && d3 == '1' && d4 == '0') //Vai conferir se a senha está correta 
	{
		printf("\n\n\t\t Seja bem-vindo! \n\n"); 
		printf("1 - Consultar saldo\n");
		printf("2 - Realizar depósito\n"); 
		printf("3 - Realizar pagamentos\n"); 
		printf("4 - Fazer transferência\n"); 
		printf("5 - Sair "); 
		printf("\n\nO que você deseja fazer? Só escolher uma das opções. ");
		scanf("%i", &opc); 
		
		switch(opc)
		{
			case 1: printf("Operação: Saldo"); 
					break; 
			case 2: printf("Operação: Depósito");
					break;
			case 3: printf("Operação: Pagamentos"); 
					break;
			case 4: printf("Operação: Transferência"); 
					break;
			case 5: printf("Encerrando operações..."); 
					break;
			default: printf("Ops, não identificamos essa opção!");
					break;
		}
		
	}
	else
	{
		printf("\n\nSENHA INCORRETA!"); 
	}
	

	getch(); 
}
