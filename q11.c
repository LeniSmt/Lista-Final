#include <stdio.h>
#include <stdlib.h>

int main()
{
    float VPre, desc, NPre;
    
    printf("Qual o valor do produto?:\n");
    scanf("%f", &VPre);
    desc = VPre*0.09;
    NPre = VPre-desc;
    printf("Com o nosso desconto o preço desse produto fica: %.2f\n", NPre);

    return 0;
}


