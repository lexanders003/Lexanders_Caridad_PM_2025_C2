#include <stdio.h>

void main(void)
{
    int i, j, k, N = 10;

    for (i = 1; i <= N; i++) {
        int val = i;
        for (j = 1; j <= i; j++) {
            printf("%d ", val % 10);
            val++;
        }

        val -= 2;
        for (k = 1; k < i; k++) {
            printf("%d ", val % 10);
            val--;
        }
        printf("\n");
    }

    return 0;
}
