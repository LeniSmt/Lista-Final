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
    int num=1;
    
    printf("Todos os números ímpares de 1 até 100:\n");
    while (num<=100)
    {
        printf("%d ", num);
        num+=2;
    }
    printf("\nfim");
    return 0;
}

