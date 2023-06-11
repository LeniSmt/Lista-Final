#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    
    printf("Digite sua idade: ");
    scanf("%d", &i);
    if (i>=10 && i<=14)
    {
        printf("Categoria: Infantil\n");
    } 
    else if (i>=15 && i<=17) 
    {
        printf("Categoria: Juvenil\n");
    } 
    else if (i>=18 && i<=25) 
    {
        printf("Categoria: Adulto\n");
    } 
    else 
    {
        printf("Você está em outra categoria.\n");
    }
    
    return 0;
}

