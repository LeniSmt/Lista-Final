#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num;
    
    printf("Digite um número: ");
    scanf("%f", &num);
    if (num>=0)
    {
        float rq = sqrt(num);
        printf("Sua raiz quadrada é: %.2f\n", rq);
    }
    else
    {
        float qua = num*num;
        printf("O número elevado ao quadrado é: %.2f\n", qua);
    }


    return 0;
}

