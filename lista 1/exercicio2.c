#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main()

{

    float a, b, c, x, y;

    printf("insira as variaveis a b e c \n");

    scanf ("%f %f %f", &a, &b, &c);

    x= sqrt((b*b)-(4*a*c));

    y=(-b + x)/(2*a);

    printf("%f", y);

    return 0;

}