#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numDec;
    
    printf("Digite um número decimal: ");
    scanf("%d", &numDec);
    printf("\nO número em hexadecimal (hexa): %X\n", numDec);
    printf("\nO número em octal é: %o\n", numDec);

    return 0;
}


