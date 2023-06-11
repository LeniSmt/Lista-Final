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

