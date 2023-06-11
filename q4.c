#include <stdio.h>
#include <stdlib.h>

    void trocar(int*a, int*b) 
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void oc(int l[], int t) 
    {
        for (int i = 0; i<t - 1; i++) 
        {
            for (int j = 0; j<t - i - 1; j++) 
            {
                if (l[j]>l[j + 1]) 
                {
                    trocar(&l[j], &l[j + 1]);
                }
            }
        }
    }
    void od(int l[], int t) 
    {
        for (int i = 0; i < t - 1; i++) 
        {
            for (int j = 0; j < t - i - 1; j++) 
            {
                if (l[j] < l[j + 1])
                {   
                    trocar(&l[j], &l[j + 1]);
                }
            }
        }
    }
    
    void il(int l[], int t) 
    {
        for (int i = 0; i < t; i++) 
        {
            printf("%d ", l[i]);
        }
        printf("\n");
        
    }
    int main() 
    {
        int l[10];
        printf("Digite 10 valores inteiros:\n");
        for (int i = 0; i < 10; i++) 
        {
        scanf("%d", &l[i]);
    }

    int op;
    printf("Escolha uma opcao:\n");
    printf("1 - Listar em ordem crescente\n");
    printf("2 - Listar em ordem decrescente\n");
    printf("3 - Listar na ordem original\n");
    scanf("%d", &op);

    switch (op) 
    {
        case 1:
            oc(l, 10);
            printf("Valores em ordem crescente: ");
            il(l, 10);
            break;
        case 2:
            od(l, 10);
            printf("Valores em ordem decrescente: ");
            il(l, 10);
            break;
        case 3:
            printf("Valores na ordem original: ");
            il(l, 10);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    return 0;
}
