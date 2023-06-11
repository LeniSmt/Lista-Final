#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Digite sua idade: ");
    scanf("%d", &i);
    if (i<16) 
    {
        printf("\nVocê não pode votar.\n");
    } 
    else if (i>=18 && i<=65) 
    {
        printf("\nVocê deve votar.\n");
    } 
    else 
    {
        printf("\nVocê pode votar.\n");
    }

    return 0;
}

