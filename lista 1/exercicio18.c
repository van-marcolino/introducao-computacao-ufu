

#include <stdio.h>

#include <stdlib.h>

#include <math.h>



int main()

{

    float cateto_op, hipotenusa, cateto_adj, rad;

    printf("insira os valores do cateto oposto e do angulo em rad \n");

    scanf("%f %f", &cateto_op, &rad);

    hipotenusa=cateto_op/sin(rad);

    printf("valor da hipotenusa %f \n", hipotenusa);

    cateto_adj=cos(rad)*hipotenusa;

    printf("valor do cateto adjacente %f \n", cateto_adj);

    return 0;

}
