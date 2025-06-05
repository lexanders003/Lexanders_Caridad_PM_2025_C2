#include <stdio.h>

int esPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

void main(void)
 {
    int N1, N2;
    printf("Ingrese N1 y N2: ");
    scanf("%d %d", &N1, &N2);

    for (int i = N1; i <= N2 - 2; i++) {
        if (esPrimo(i) && esPrimo(i+2))
            printf("(%d, %d)\n", i, i+2);
    }

    return 0;
}
