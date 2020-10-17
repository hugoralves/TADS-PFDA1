#include <stdio.h>
#include <stdlib.h>

main ()
{
 int cont;
 float base, altura, area;
 system ("cls"); // Limpa a tela
 cont=0; base=0; altura=0; area=0; // esse cont vai definir a quantidade de loops
 
 do
 {
	 printf ( "\n Base :" ); fflush(stdin); scanf("%f", &base); // Limpeza de buffer
	 printf ( "\n Altura :" ); fflush(stdin); scanf("%f", &altura);
	 if ( base==0 || altura==0 )
	 printf ("\nImpossível calcular área do triângulo!");
	 else
	 {
	 area = base*altura/2;
	 printf ( "\n Área =%5.2f" , area );
	 }
	 cont++;
	 }
	 while ( cont < 3 );
	 
 printf ("\n");
 system ("pause");
}
