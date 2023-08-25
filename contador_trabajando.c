#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float SUELDO_HORAS, Horas_trabajadas, sueldo;

    SUELDO_HORAS = 800;

    printf ("ingrese las horas trabajadas por el Contador: \n");
    scanf ("%f", &Horas_trabajadas);


    sueldo = SUELDO_HORAS * Horas_trabajadas;

    printf ("El sueldo del contador es de: %f \n", sueldo);

    system ("pause");

    return 0;
}
