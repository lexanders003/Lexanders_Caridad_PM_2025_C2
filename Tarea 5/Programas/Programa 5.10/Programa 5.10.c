#include <stdio.h>

const int MAX = 100;

void Lectura(int A[], int T);
int Busca(int A[], int T, int E);

int main(void) {
    int RES, ELE, TAM, VEC[MAX];
    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Busca(VEC, TAM, ELE);

    if (RES)
        printf("\nEl elemento se encuentra en la posici�n: %d", RES);
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

int Busca(int A[], int T, int E) {
    int RES, I = 0, BAN = 0;
    while ((I < T) && (E >= A[I]) && BAN == 0) {
        if (A[I] == E)
            BAN++;
        else
            I++;
    }
    if (BAN)
        RES = I + 1;
    else
        RES = 0;
    return RES;
}
