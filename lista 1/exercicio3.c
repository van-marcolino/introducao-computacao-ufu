#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

float w, a, y, z, t;

printf("digite os valores de w e a \n");

scanf("%f %f", &w, &a);

y=(w-a)/(w+a);

if(y<0){

    y=y*(-1);

}

z=log(y);

t=z*(0.5);

printf("resultado %f \n", t);

return 0;

}