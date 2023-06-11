#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,dm,cm,mm;
    
    printf("digite o comprimento em metros: \n");
    scanf("%d", &m);
    dm = m*10;
    cm = dm*10;
    mm = cm*10;
    printf("\nEsse comprimento em decímetros é: \n%ddm", dm);
    printf("\nEsse comprimento em centímetros é: \n%dcm", cm);
    printf("\nEsse comprimento em milímetros é: \n%dmm", mm);

    return 0;
}

