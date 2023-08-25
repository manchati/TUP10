#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float lado1, lado2, hipotenusa, perimetro;

printf ("ingrese los dos valores que tiene del triangulo: \n");

scanf ("%f", &lado1);
scanf ("%f", &lado2);

hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));

printf ("el valor de la hipotenusa es: %f", hipotenusa);

system ("pause");

return 0;

}