#include <stdio.h>

void main(void)
 {
    int N1, N2, temp;

    printf("Ingrese dos números: ");
    scanf("%d %d", &N1, &N2);

    while (N2 != 0) {
        temp = N2;
        N2 = N1 % N2;
        N1 = temp;
    }

    printf("El MCD es: %d\n", N1);
    return 0;
}
