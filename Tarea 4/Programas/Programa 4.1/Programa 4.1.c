#include <stdio.h>
 /* Cubo-1.
 El programa calcula el cubo de los 10 primeros n�meros naturales con la
 ayuda de una funci�n. En la soluci�n del problema se utiliza una variable
 global, aunque esto, como veremos m�s adelante, no es muy recomendable. */
 int cubo(void);
/* Prototipo de funci�n. */
 int I;
 void main(void)
 {
 int CUB;
 for (I = 1; I <= 10; I++)
 {
 CUB = cubo();
  printf("\nEl cubo de %d es:  %d", I, CUB);
}
 }
 int cubo(void)


 {
 return (I*I*I);
 }
