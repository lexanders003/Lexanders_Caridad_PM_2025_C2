#include <stdio.h>

void main(void)
 {
    int N;
    float vino[50][4]; // Máximo 50 años
    float totalTipo[4] = {0}, totalAnual;

    printf("Ingrese el número de años: ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("Año %d:\n", i+1);
        for(int j = 0; j < 4; j++) {
            printf("  Tipo %d: ", j+1);
            scanf("%f", &vino[i][j]);
            totalTipo[j] += vino[i][j];
        }
    }

    printf("\nTotal por tipo:\n");
    for(int j = 0; j < 4; j++) {
        printf("Tipo %d: %.2f litros\n", j+1, totalTipo[j]);
    }

    printf("\nTotal anual por año:\n");
    for(int i = 0; i < N; i++) {
        totalAnual = 0;
        for(int j = 0; j < 4; j++)
            totalAnual += vino[i][j];
        printf("Año %d: %.2f litros\n", i+1, totalAnual);
    }

    return 0;
}
