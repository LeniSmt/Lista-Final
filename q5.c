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
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Tabuada de multiplicacao do numero %d:\n", num);
    for (int i = 0; i<=10; i++) 
    {
        int resul = num*i;
        printf("%d x %d = %d\n", num, i, resul);
    }

    return 0;
}
