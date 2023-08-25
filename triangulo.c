#include <stdio.h>
#include <stdlib.h>

int main()
{
float lado1, lado2, lado3, perimetro;

printf ("ingrese el valor de los tres lados del triangulo: \n");
scanf ("%f", &lado1);
scanf ("%f", &lado2);
scanf ("%f", &lado3);

perimetro = lado1 + lado2 + lado3;

printf ("el valor del perimetro es: %f \n", perimetro);

system ("pause");

return 0;

    
}