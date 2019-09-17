








#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main (){

int lapis, criancas, resultado, resto;

printf("quantidade de lapis e criancas \n");

scanf("%d %d", &lapis, &criancas);

resultado=lapis/criancas;

printf("resultado %d", resultado);

resto=lapis%criancas;

printf("resto %d", resto);

return 0;


}