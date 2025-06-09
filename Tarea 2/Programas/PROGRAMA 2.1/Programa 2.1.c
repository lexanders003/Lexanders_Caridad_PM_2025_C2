#include <stdlib.h>
/*Promedio del curso.
El progreama, al recibir como dato el promedio de un alumno en un curos universitario, escribe aprovado si su promedio es mayor o igual a 6.
PRO: variable de tipo real*/
void main(void)
{
    float PRO;
    printf("Ingrese el promedio del alumno: ");
    scanf("%f" , &PRO);
    if (PRO >= 6)
         printf("\nAprobado");
}
