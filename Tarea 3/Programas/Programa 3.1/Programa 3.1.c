#include <stdio.h>

int main(void)
{
    int I;
    float SAL, NOM;
    NOM = 0.0;

    for (I = 1; I<=5; I++)
    {
        printf("Ingrese el salario del profesor %d:\t", I);
        scanf("%f", &SAL);
        NOM = NOM + SAL;
    }
        printf("\Total a pagar es: %.2f", NOM);
    return 0;
}
