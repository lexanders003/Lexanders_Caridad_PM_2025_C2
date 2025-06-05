#include <stdio.h>

void main(void)
{
    float L[6], montoTotal = 0;
    int boletos[6] = {0}, tipo, cantidad;

    // Lectura de precios
    for(int i = 0; i < 6; i++) {
        printf("Ingrese el precio para L%d: ", i+1);
        scanf("%f", &L[i]);
    }

    // Lectura de ventas
    while (1) {
        printf("Ingrese tipo de localidad (1 a 6) y cantidad de boletos (0 0 para terminar): ");
        scanf("%d %d", &tipo, &cantidad);

        if (tipo == 0 && cantidad == 0)
            break;

        montoTotal += L[tipo - 1] * cantidad;
        boletos[tipo - 1] += cantidad;
    }

    // Resultados
    for(int i = 0; i < 6; i++) {
        printf("Localidad L%d: %d boletos vendidos\n", i+1, boletos[i]);
    }
    printf("Recaudación total: %.2f\n", montoTotal);

    return 0;
}
