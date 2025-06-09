#include <stdio.h>

void main(void)
 {
    int N;
    printf("Ingrese un número: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= N - i; j++)
            printf("%d ", j);
        for (int j = N - i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
