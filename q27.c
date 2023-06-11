#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tc;
    float dr, ce;

    printf("\nQual é o seu carro? (A, B ou C): ");
    scanf(" %c", &tc);
    printf("\nQual a distância percorrida em quilômetros?: ");
    scanf("%f", &dr);
    switch (tc) 
    {
        case 'A':
        case 'a':
            ce = dr/8.0;
            break;
        case 'B':
        case 'b':
            ce = dr/9.0;
            break;
        case 'C':
        case 'c':
            ce = dr/12.0;
            break;
        default:
            printf("\nTipo de carro inválido.\n");
            return 0;
    }
    printf("\nO consumo estimado é de %.2f litros.\n", ce);

    return 0;
}
