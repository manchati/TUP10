#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float lado_1, lado_2, area, perimetro, hipotenusa;

    printf ("ingrese la base y altura del rectangulo: \n");
    scanf ("%f", &lado_1);
    scanf ("%f", &lado_2);

    perimetro = (lado_1 * 2) + (lado_2 * 2);
    area = lado_1 * lado_2;
    hipotenusa = sqrt(pow(lado_1, 2) + pow (lado_2, 2));

    printf ("los valores del rectangulo son: \n Perimetro: %f \n Area: %f \n Diagonal: %f \n", perimetro, area, hipotenusa);

    system ("pause");

    return 0;
}
