/***


VETOR
=====
criação
-------
  tipo nome[TAMANHO_DO_VETOR];
  exemplo ===> int matricula[50];

manipulação
-----------
   redomendação a utilização do FOR

   for(i=0; i<TAMANHO_DO_VETOR; i++)
   {
   	......
   }
 ============================================================================================  
   MATRIZ
======
criação
------
  tipo nome[quantidadeLinhas][quantidadeColunas];
  exemplo ===> int M[3][2];   // matriz de 3 linhas x 2 colunas

manipulação
-----------
   redomendação a utilização de 2 FORs encadeado

   for(i=0; i<quantidadeLinhas; i++)		// gerencia as linhas
   {
	for(j=0; j<quantidadeColunas; j++)	// gerencia as colunas
	{	
		......
	}
   
   }
   
   /***
