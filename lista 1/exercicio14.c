#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float x, rad, pi, y;

    printf("insira o valor do grau desejado \n");

    scanf("%f", &x);

    pi=(3.14);

    y=x*pi;

    rad=(y/180);

    printf("valor da conversao de grau para radiano = %.2f pirad", rad);

    return 0;

}
