#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Hacer un programa que determine el rango de edad de una persona.
    // 1-El recien nacido, persona de edad menor a 1 año.
    // 2-El infante con edad entre 1 y 3 anos
    // 3-El nino con edad entre 3 y 12 anos
    // 4-El adolecente con edad mayor de 12 y menor a 18 anos
    // 5-El mayor de edad es una persona mayor de 18 y menor de 38 anos
    // 6-El adulto mayor es mayor de 38 y menor de 68 anos
    // 7- El envejeciente es mayor de 68 y menor a 86 anos
    // 8- El anciano es mayor de 86 anos

    int edad = 0;

    printf("Clase de seleccion!\n");
    printf("Ingrese su edad:");
    scanf("%i", &edad);

    if(edad >= 0 && edad <=120)//Verificar la validacion de los datos
    {
      if(edad < 1)
      {
        printf("Usted es un recien nacido");
      }
      else if(edad >=1 && edad <=3)
      {
          printf("Usted es un infante");
      }

      else if(edad > 3 && edad < 12)
    {
        printf("Usted es un nino");
    }
    else if(edad > 12 && edad < 18)
    {
        printf("Usted es un adolescente");
    }
    else if(edad > 18 && edad < 38)
    {
        printf("Usted es un mayor de edad");
    }
    else if(edad > 38 && edad < 68)
    {
        printf("Usted es un adulto mayor");
    }
    else if(edad > 68 && edad < 86)
    {
        printf("Usted es un envejeciente");
    }
    else if(edad > 86)
    {
        printf("Usted es un anciano");
    }
    else
    {
        printf("Caso no evaluado");
        }
    }
    else
    {
        if(edad < 0)
        {
            printf("\nError!, edad negativa");
        }
     if(edad > 120)
     {
         printf("\Edad muy alta,no es real");
     }

    }
return 0;
}
