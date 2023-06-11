#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, resul;
    int op;
    
    printf("Digite um valor:\n");
    scanf("%f", &num1);
    printf("\nDigite outro valor:\n");
    scanf("%f", &num2);
    printf("Selecione a operação:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Digite o número da operação que será utilizada: ");
    scanf("%d", &op);
    switch (op) 
    {
        case 1:
            resul = num1+num2;
            printf("Resultado: %.2f\n", resul);
            break;
        case 2:
            resul = num1-num2;
            printf("Resultado: %.2f\n", resul);
            break;
        case 3:
            resul = num1*num2;
            printf("Resultado: %.2f\n", resul);
            break;
        case 4:
            if (num2 != 0)
            {
                resul = num1/num2;
                printf("Resultado: %.2f\n", resul);
            } 
            else 
            {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Erro: Operação inválida!\n");
            break;
    }

    return 0;
}

