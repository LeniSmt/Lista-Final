#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m;
    
    printf("Digite o mês: ");
    scanf("%d", &m);
    if (m>=1 && m<=12) 
    {
        switch(m) 
        {
            case 1:
                d = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                d = 30;
                break;
            default:
                d = 31;
                break;
        }
        printf("O mês %d possui %d dias.\n", m, d);
    } 
    else 
    {
        printf("Número de mês inválido.\n");
    }

    return 0;
}
