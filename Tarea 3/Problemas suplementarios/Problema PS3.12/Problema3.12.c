#include <stdio.h>

void main(void)
{
    int NUM, i, j, primo;

    printf("Ingrese un número: ");
    scanf("%d", &NUM);

    for(i = 2; i < NUM; i++) {
        primo = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                primo = 0;
                break;
            }
        }
        if(primo) printf("%d ", i);
    }

    return 0;
}
