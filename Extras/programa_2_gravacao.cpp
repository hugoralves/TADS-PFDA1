#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct
{
	char nome[30];
	int idade;
	float nota;
}ficha;

ficha aluno;

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pont_arq;		// ponteiro para arquivo

	// strcmp, strlen, etc, etc
	strcpy(aluno.nome, "Andre Evandro Lourenco");
	aluno.idade = 30;
	aluno.nota  = 4.5;
	
 	pont_arq = fopen("arquivoTeste.txt","w");
 	
 	if(pont_arq == NULL)
 	{
 		printf("Erro na cria�ao/abertura do arquivo");
	}
	else
	{
		printf("Arquivo criado com sucesso!!!");

   		fwrite(&aluno, 1 , sizeof(ficha) , pont_arq);
 		
		fclose(pont_arq);
	}
	system("pause");

}




/********************************************************************
 Modos de abertura de arquivos
�r� Abre o arquivo somente para leitura, a partir do in�cio. O arquivo deve existir.
�w� Cria um arquivo vazio para escrita. Se j� havia o arquivo, ele � perdido.
�a� Adiciona no final do arquivo. Se o arquivo n�o existir, a fun��o o cria.
�r+� Abre o arquivo para leitura e escrita, a partir do in�cio. O arquivo deve existir.
�w+� Cria um arquivo vazio para leitura e escrita. Se j� havia o arquivo, ele � perdido.
�a+� Abre para adi��o ou leitura no final do arquivo. Se o arquivo n�o existir, a fun��o o cria.
*************************************************************/






