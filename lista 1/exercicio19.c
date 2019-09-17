
#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float h, c1, c2;

    printf("insira os valores dos catetos \n");

    scanf("%f %f", &c1, &c2);

    h=sqrt((c1*c1)+(c2*c2));

    printf("o valor da hipotenusa= %f", h);

    return 0;

}
