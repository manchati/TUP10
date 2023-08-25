#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1, num2, num3, suma;

printf ("ingrese tres valores: \n");
scanf ("%i", &num1);
scanf ("%i", &num2);
scanf ("%i", &num3);
suma = num1 + num2 + num3;

printf ("el resultado es: %d \n",suma);

system ("pause");

}