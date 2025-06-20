#include <stdio.h>

/* Primos.
   El programa almacena en un arreglo unidimensional los primeros 100 números primos. */

const int TAM = 100;

void Imprime(int[], int);
void Primo(int, int *);

int main(void) {
    int P[TAM] = {1, 2};
    int FLA, J = 2, PRI = 3;

    while (J < TAM) {
        FLA = 1;
        Primo(PRI, &FLA); // Determina si PRI es primo
        if (FLA) {
            P[J] = PRI;
            J++;
        }
        PRI += 2; // Solo se prueban números impares
    }

    Imprime(P, TAM);
    return 0;
}

void Primo(int A, int *B) {
    int DI = 3;

    while (*B && DI <= A / 2) {
        if (A % DI == 0)
            *B = 0;
        else
            DI++;
    }
}

void Imprime(int Primos[], int T) {
    for (int I = 0; I < T; I++)
        printf("Primos[%d]: %d\n", I, Primos[I]);
}
