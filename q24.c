#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1, l2, l3;

    printf("Digite um dos lados do triângulo: ");
    scanf("%f", &l1);
    printf("\nDigite outro lado do triângulo: ");
    scanf("%f", &l2);
    printf("\nDigite o último lado do triângulo: ");
    scanf("%f", &l3);
    if (l1==l2 && l2==l3) 
    {
        printf("\nO triângulo é equilátero\n");
    } 
    else if (l1==l2 || l1==l3 || l2==l3)
    {
        printf("\nO triângulo é isósceles\n");
    } 
    else 
    {
        printf("\nO triângulo é escaleno\n");
    }

    return 0;
}

