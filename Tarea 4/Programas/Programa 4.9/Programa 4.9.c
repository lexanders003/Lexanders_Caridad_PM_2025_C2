#include <stdio.h>
 /* Paso de una función como parámetro por referencia. */
 int Suma(int X, int Y)
 /* La función Suma regresa la suma de los parámetros de tipo entero
 X y Y. */
 {
 return (X+Y);
 }
 int Resta(int X, int Y)
 /* Esta función regresa la resta de los parámetros de tipo entero
 ➥ X y Y. */
 {
 return (X-Y);
 }


 int  Control(int (*apf) (int, int), int X, int Y)
 /* Esta función recibe como parámetro otra función —la dirección— y
 dependiendo de cuál sea ésta, llama a la función SSuummaa o RReessttaa. */
 {
 int RES;
 RES = (*apf) (X, Y);        /* Se llama a la función SSuummaa o RReessttaa. */
 return (RES);
 }
 void main(void)
 {
 int R1, R2;
 R1 = Control(Suma, 15, 5);  /* Se pasa como parámetro la función SSuummaa. */
 R2 = Control(Resta, 10, 4); /* Se pasa como parámetro la función RReessttaa.*/
 printf("\nResultado 1: %d", R1);
 printf("\nResultado 2: %d", R2);
 }
