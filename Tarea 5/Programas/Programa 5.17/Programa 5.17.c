#include <stdio.h>

/* Apuntadores y arreglos */
int main(void) {
    int V1[4] = {1, 3, 5, 7}, V2[4] = {2, 4};
    int *AX, *AY;

    AX = &V1[2];        // AX apunta a V1[2] → valor 5
    AY = &V2[2];        // AY apunta a V2[2] (aún no definido)

    V2[2] = *(AX + 1);  // V2[2] = V1[3] → 7
    V2[3] = *AX;        // V2[3] = V1[2] → 5

    AX = AX + 1;        // AX apunta ahora a V1[3]
    V1[0] = *AX;        // V1[0] = V1[3] → 7

    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \t"
           "V2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V1[2] = *AY;        // V1[2] = V2[2] → 7
    V1[1] = --*AY;      // *AY = V2[2] = 6, V1[1] = 6

    AX = AX + 1;        // AX apunta fuera del arreglo original (⚠️ comportamiento indefinido)
    V1[3] = *AX;        // Accede a memoria fuera de V1 → puede dar error o valor basura

    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \t"
           "V2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d\n",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    return 0;
}
