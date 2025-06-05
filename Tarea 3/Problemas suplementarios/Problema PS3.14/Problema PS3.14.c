#include <stdio.h>
#include <math.h>

void main(void)
 {
    float x, term, senx = 0;
    int n = 0, signo = 1, fact;

    printf("Ingrese X en radianes: ");
    scanf("%f", &x);

    do {
        fact = 1;
        for(int i = 1; i <= 2*n+1; i++)
            fact *= i;

        term = signo * pow(x, 2*n+1) / fact;
        senx += term;
        signo *= -1;
        n++;
    } while(fabs(term) >= 0.001);

    printf("sen(%.2f) ≈ %.5f usando %d términos\n", x, senx, n);

    return 0;
}
