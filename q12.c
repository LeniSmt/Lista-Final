#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int TVia, VelM, DP;
    
    printf("Digite o tempo da sua viagem (em horas): ");
    scanf("%d", &TVia);
    printf("\nDigite a velocidade média do veículo de transporte (em km/h): ");
    scanf("%d", &VelM);
    DP = TVia*VelM;
    printf("\nA distância percorrida foi:\n%dkm\n", DP);

    return 0;
}


