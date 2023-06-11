/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    
    printf("Digite o tamanho do quadrado (entre 1 e 20): ");
    scanf("%d", &t);
    if (t>=1 && t<=20) 
    {
        
        for (int i=0; i<t; i++) 
        {
            for (int j=0; j<t; j++) 
            {
                printf(" *");
            }
            printf("\n");
        }
    } 
    else 
    {
        printf("Tamanho do lado inválido.\n");
    }

    return 0;
}
