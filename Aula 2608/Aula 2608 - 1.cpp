#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A; 

    printf("Digite um n�mero: "); 
    scanf("%i", &A);

    if(A%2 == 0)
    {
        printf("O n�mero � PAR");
    }
    
    printf("O n�mero � IMPAR"); 
    
    return 0; 
}

