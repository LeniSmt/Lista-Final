#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("\nO número é par.\n");
    }
    else
    {
        printf("\nO número é ímpar.\n");
    }

    return 0;
}

