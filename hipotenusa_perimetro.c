#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float lado1, lado2, hipotenusa, perimetro, area;

printf ("ingrese los dos valores que tiene del triangulo: \n");

scanf ("%f", &lado1);
scanf ("%f", &lado2);

hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));

perimetro = lado1 + lado2 + hipotenusa;

area = (lado1 * lado2)/2 ;

printf ("El valor de la hipotenusa es: %f \n El valor del perimetro es: %f \n El valor del area es: %f" , hipotenusa, perimetro, area);

system ("pause");

return 0;
}