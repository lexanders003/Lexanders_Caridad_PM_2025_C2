#include <stdio.h>

const int MAX = 100;

void Lectura(int A[], int T);
int Binaria(int A[], int T, int E);

int main(void) {
    int RES, ELE, TAM, VEC[MAX];

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1); // Verifica que TAM esté en rango

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE);

    if (RES)
        printf("\nEl elemento se encuentra en la posición: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");

    return 0;
}

void Lectura(int A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Binaria(int A[], int T, int E) {
    int IZQ = 0, DER = T - 1, CEN, POS = 0;

    while ((IZQ <= DER) && (POS == 0)) {
        CEN = (IZQ + DER) / 2;
        if (E == A[CEN])
            POS = CEN + 1; // Devuelve posición 1-based
        else if (E > A[CEN])
            IZQ = CEN + 1;
        else
            DER = CEN - 1;
    }

    return POS;
}
