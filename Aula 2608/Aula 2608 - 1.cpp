#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A; 

    printf("Digite um número: "); 
    scanf("%i", &A);

    if(A%2 == 0)
    {
        printf("O número é PAR");
    }
    
    printf("O número é IMPAR"); 
    
    return 0; 
}

