#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    
    printf("Digite o nome:\n");
    scanf("%s", nome);
    printf("As 4 primeiras letras desse nome são:\n");
    for (int i=0; i<4 && nome[i] !='\0'; i++)
    {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}

