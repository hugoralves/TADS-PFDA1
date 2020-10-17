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
	FILE *pont_arquivo;		// ponteiro para arquivo
	
	setlocale(LC_ALL, "Portuguese");
	
 	pont_arquivo = fopen("arquivoTeste.txt","r");
 	
 
 	
	 	if(pont_arquivo == NULL)
	 	{
	 		printf("Erro na cria�ao/abertura do arquivo");
		}
		else
		{
			printf("Arquivo criado com sucesso!!!");
	
			fread(&aluno, sizeof(ficha), 1, pont_arquivo);
			
			printf("\nNome aluno...: %s", aluno.nome);
			printf("\nIdade aluno...: %i", aluno.idade);
			printf("\nNota aluno...: %f\n\n", aluno.nota);
			
	   		fclose(pont_arquivo);
		}
	system("\n\npause");

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






