#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num%10==0)
    {
        printf("O número pode ser divido por 10.\n");
    } 
    else if (num%5==0)
    {
        printf("O número pode ser divido por 5.\n");
    } 
    else if (num%2==0)
    {
        printf("O número pode ser divido por 2.\n");
    } 
    else 
    {
        printf("O número não é dividido.\n");
    }

    return 0;
}

