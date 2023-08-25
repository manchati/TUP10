#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   float num1, num2, suma, resta, mult;

    printf ("ingrese dos numeros que quiera sumar, multiplicar y restar: \n");
    scanf ("%f", &num1);
    scanf ("%f", &num2);
    suma = num1 + num2;
    mult = num1 * num2;
    resta = num1 - num2;

    printf ("los valores son:\n Suma: %f \n Multiplicacion: %f \n Resta: %f \n", suma, mult, resta);

    system ("pause");


    return 0;
}
