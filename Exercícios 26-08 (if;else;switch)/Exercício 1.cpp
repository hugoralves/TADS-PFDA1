#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//O programa dever ler a senha do usu�rio e mostr�-la em asterisco 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int conta,d1, d2, d3, d4, opc;
	
	printf("\t\t BEM VINDO AO BANCO DO IF \n\n Para continuar informe sua conta: "); 
	scanf("%i", &conta); 
	
	printf("\n\nAgora voc� ir� informar a sua senha \n*A mesma senha num�rica de quatro d�gitos utilizada tamb�m no seu cart�o\n\nSenha: "); 
	d1 = getch(); //Vai ocultar o digito
	printf("*");  //Vai mostrar o asterisco no lugar do digito
	d2 = getch(); 
	printf("*");
	d3 = getch(); 
	printf("*");
	d4 = getch(); 
	printf("*");
	
	if(d1 =='1' && d2 == '3' && d3 == '1' && d4 == '0') //Vai conferir se a senha est� correta 
	{
		printf("\n\n\t\t Seja bem-vindo! \n\n"); 
		printf("1 - Consultar saldo\n");
		printf("2 - Realizar dep�sito\n"); 
		printf("3 - Realizar pagamentos\n"); 
		printf("4 - Fazer transfer�ncia\n"); 
		printf("5 - Sair "); 
		printf("\n\nO que voc� deseja fazer? S� escolher uma das op��es. ");
		scanf("%i", &opc); 
		
		switch(opc)
		{
			case 1: printf("Opera��o: Saldo"); 
					break; 
			case 2: printf("Opera��o: Dep�sito");
					break;
			case 3: printf("Opera��o: Pagamentos"); 
					break;
			case 4: printf("Opera��o: Transfer�ncia"); 
					break;
			case 5: printf("Encerrando opera��es..."); 
					break;
			default: printf("Ops, n�o identificamos essa op��o!");
					break;
		}
		
	}
	else
	{
		printf("\n\nSENHA INCORRETA!"); 
	}
	

	getch(); 
}
