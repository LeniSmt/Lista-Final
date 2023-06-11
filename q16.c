#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    
    printf("Digite sua idade: ");
    scanf("%d", &i);
    if (i>=18 && i<=67)
    {
        printf("Você pode doar seu sangue!\n");
        printf("Por favor doe no local mais próximo.");
    } 
    else
    {
        printf("\nDesculpe, infelizmente você não pode doar seu sangue.\n");
    }

    return 0;
}

