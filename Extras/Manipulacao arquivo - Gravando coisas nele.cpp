/********************************************************************
 Modos de abertura de arquivos
�r� Abre o arquivo somente para leitura, a partir do in�cio. O arquivo deve existir.
�w� Cria um arquivo vazio para escrita. Se j� havia o arquivo, ele � perdido.
�a� Adiciona no final do arquivo. Se o arquivo n�o existir, a fun��o o cria.
�r+� Abre o arquivo para leitura e escrita, a partir do in�cio. O arquivo deve existir.
�w+� Cria um arquivo vazio para leitura e escrita. Se j� havia o arquivo, ele � perdido.
�a+� Abre para adi��o ou leitura no final do arquivo. Se o arquivo n�o existir, a fun��o o cria.
*************************************************************/
#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void)
{
	int B;
	int *A;	// '*' indica que � uma vari�vel do tipo ponteiro
			// ponteiro = endere�o de memoria
			// int B; - suponha que ela seja criada no en
			//          endere�o de memoria B7A12
			// *A pode receber o endere�o de B
			// A = &B;  // A esta recebendo endere�o de B
			// Dentro de A ir� conter o valor de B7A12
	
	FILE *pont_arq;		// ponteiro para arquivo
	int a = 10;
	float b = 4.5;
	
	setlocale(LC_ALL, "Portuguese");
	
 	pont_arq = fopen("arquivoTeste.txt","w");
 	
 	if(pont_arq == NULL)
 	{
 		printf("Erro na cria�ao/abertura do arquivo");
	}
	else
	{
		printf("Arquivo criado com sucesso!!!");
		
		fprintf(pont_arq, "oioioioi - %i - %f", a, b);
		
		fclose(pont_arq);
	}
	system("pause");

}
