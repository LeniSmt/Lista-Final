#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    
    printf("Digite o tamanho do quadrado (entre 1 e 20): ");
    scanf("%d", &t);
    if (t>=1 && t<=20) 
    {
        for(int i=0; i<t; i++) 
        {
            for (int j=0; j<t; j++) 
            {
                printf(" *");
            }
            printf("\n");
        }
    } 
    else 
    {
        printf("Tamanho do lado inválido.\n");
    }

    return 0;
}
