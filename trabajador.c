#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Sueldo_hora, tiempo_trabajado, sueldo;

    printf ("Ingrese la cantidad de horas laburadas por el empleado: \n");
    scanf ("%f", &tiempo_trabajado);
    printf ("ingrese el valor de cuanto gana por hora: \n");
    scanf ("%f", &Sueldo_hora);

    sueldo = tiempo_trabajado * Sueldo_hora;

    printf ("el sueldo del individuo es de: %f \n", sueldo);

    system ("pause");


    return 0;
}
