#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VHA,numA,INSS,SB;
    float SL;
    
    printf("Qual o valor da hora-aula?: ");
    scanf("%d", &VHA);
    printf("\nQuantas aulas são dadas pelo professor?: ");
    scanf("%d", &numA);
    printf("\nQual o percentual de desconto do INSS?: ");
    scanf("%d", &INSS);
    SB = VHA*numA;
    SL = SB-(SB*INSS/100);
    printf("\nSalário do professor: R$%.2f\n", SL);

    return 0;
}

