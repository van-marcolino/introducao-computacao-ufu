
#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float cateto_op, hipotenusa, cateto_adj, graus, x, pi=(3.14);

    printf("insira os valores do cateto oposto e do angulo em graus \n");

    scanf("%f %f", &cateto_op, &graus);

    x=graus*pi;

    graus=x/180;

    hipotenusa=cateto_op/sin(graus);

    printf("valor da hipotenusa %f \n", hipotenusa);


    cateto_adj=cos(graus)*hipotenusa;

    printf("valor do cateto adjacente %f \n", cateto_adj);


    return 0;

}