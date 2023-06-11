#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vc, vv;
    float lucro;

    printf("Digite o valor da compra: ");
    scanf("%f", &vc);
    if (vc<20.00) 
    {
        lucro=0.45;
        
    } 
    else
    {
        lucro=0.30;
    }
    vv = vc+(vc*lucro);
    printf("\nO valor da venda é: %.2f\n", vv);

    return 0;
}

