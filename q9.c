#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float num1, num2;
    float soma, prod, qua1, RQua, seno;
    
    printf("Digite um número:\n");
    scanf("%f", &num1);
    printf("\nDigite outro número:\n");
    scanf("%f", &num2);
    soma = num1+num2;
    prod = num1*pow(num2, 2);
    qua1 = pow(num1, 2);
    RQua = sqrt(pow(num1, 2) + pow(num2, 2));
    seno = sin(num1 - num2);
    printf("\nA Soma dos números é: %.2f\n", soma);
    printf("\nO Produto do primeiro número pelo quadrado do segundo é: %.2f\n", prod);
    printf("\nO Quadrado do primeiro número é: %.2f\n", qua1);
    printf("\nA Raiz quadrada da soma dos quadrados é: %.2f\n", RQua);
    printf("\nO Seno da diferença do primeiro número pelo segundo é: %.2f\n", seno);

    return 0;
}


