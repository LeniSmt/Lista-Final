#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, a;
    
    printf("Digite o dia de aniversário: ");
    scanf("%d", &d);
    printf("\nDigite o mês de aniversário: ");
    scanf("%d", &m);
    printf("\nDigite o ano de aniversário (ex: 2000): ");
    scanf("%d", &a);
    if (a>1900 && a<2023 && m>=1 && m<=12 && d>=1 && d<=31) 
    {
        printf("\nData de aniversário válida.\n");
        printf("\nSeu aniversário é: %d.%d.%d", d,m,a);
    } 
    else 
    {
        printf("\nData de aniversário errada.\n");
        if (a<1900 || a>2023) 
        {
            printf("\nO ano está incorreto.\n");
        }
        if (m<1 || m>12) 
        {
            printf("\nEsse mês não existe.\n");
        }
        if (d<1 || d>31) 
        {
            printf("\nEsse dia não existe.\n");
        }
    }

    return 0;
}
