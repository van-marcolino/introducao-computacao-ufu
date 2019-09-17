#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float a, b, c, x, y, z, resultado;

    printf("insira o valor das variaveis \n");

    scanf("%f %f %f", &a, &b, &c);

    printf("insira o valor dos pesos \n");

    scanf("%f %f %f", &x, &y, &z);

    resultado=((a*x)+(b*y)+(c*z))/(x+y+z);

    printf("resultado da media ponderada %f", resultado);

    return 0;

}