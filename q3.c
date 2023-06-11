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
     float n[5][4];
    float ma[5];
    float mt = 0;

    for (int i = 0; i<5; i++) 
    {
        printf("Digite as 4 notas do aluno %d:\n", i + 1);
        for (int j = 0; j<4; j++) 
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &n[i][j]);
        }
    }
    for (int i = 0; i<5; i++) 
    {
        ma[i] = (n[i][0]*3 + n[i][1]*2 + n[i][2] + n[i][3])/7;
        mt += ma[i];
    }
    mt/=5;
    for (int i=0; i<5; i++) 
    {
        float m = ma[i];
        float mm = 7;
        float pr = mm - m;
        if (m>=6) 
        {
            printf("\nAluno %d: Passou\n", i + 1);
        } 
        else if (m>=4)
        {
            printf("\nAluno %d: Vai para recuperação - precisa de %.2f pontos\n", i + 1, pr);
        } 
        else 
        {
            printf("\nAluno %d: Não passou\n", i + 1);
        }
    }
    printf("\nMédia da turma: %.2f\n", mt);
    
    return 0;
}
