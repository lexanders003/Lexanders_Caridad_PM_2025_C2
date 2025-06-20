#include <stdio.h>
#include <math.h>

/* Estad�stico:
   Calcula media, varianza, desviaci�n est�ndar y moda
   a partir de un arreglo de calificaciones entre 0 y 10. */

const int MAX = 100;

void Lectura(int *, int);
float Media(int *, int);
float Varianza(int *, int, float);
float Desviacion(float);
void Frecuencia(int *, int, int *);
int Moda(int *, int);

int main(void) {
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;

    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(ALU, TAM);
    MED = Media(ALU, TAM);
    VAR = Varianza(ALU, TAM, MED);
    DES = Desviacion(VAR);
    Frecuencia(ALU, TAM, FRE);
    MOD = Moda(FRE, 11);

    printf("\nMedia:      %.2f", MED);
    printf("\nVarianza:   %.2f", VAR);
    printf("\nDesviaci�n: %.2f", DES);
    printf("\nModa:       %d\n", MOD);

    return 0;
}

void Lectura(int A[], int T) {
    for (int I = 0; I < T; I++) {
        do {
            printf("Ingrese la calificaci�n %d (0-10): ", I + 1);
            scanf("%d", &A[I]);
        } while (A[I] < 0 || A[I] > 10); // Validaci�n de rango
    }
}

float Media(int A[], int T) {
    float SUM = 0.0;
    for (int I = 0; I < T; I++)
        SUM += A[I];
    return SUM / T;
}

float Varianza(int A[], int T, float M) {
    float SUM = 0.0;
    for (int I = 0; I < T; I++)
        SUM += pow((A[I] - M), 2);
    return SUM / T;
}

float Desviacion(float V) {
    return sqrt(V);
}

void Frecuencia(int A[], int P, int B[]) {
    for (int I = 0; I < P; I++)
        B[A[I]]++;
}

int Moda(int A[], int T) {
    int I, MOD = 0, FREQ = A[0];
    for (I = 1; I < T; I++) {
        if (A[I] > FREQ) {
            FREQ = A[I];
            MOD = I;
        }
    }
    return MOD;
}
