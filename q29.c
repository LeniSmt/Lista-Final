#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qa;
    float n, sn = 0;
    int c = 0;
    
    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &qa);
    while (c<qa) 
    {
        printf("Digite a nota do aluno %d: ", c+1);
        scanf("%f", &n);
        sn+=n;
        c++;
    }
    float media = sn/qa;
    printf("A média aritmética da turma é: %.2f\n", media);

    return 0;
}
