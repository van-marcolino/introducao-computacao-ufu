#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float valor_fixo, vendas, salario;

    printf("insira o salario fixo e o numero de vendas \n");

    scanf("%f %f", &valor_fixo, &vendas);

    vendas=vendas*0.05;

    salario=valor_fixo+vendas;

    printf("Salario mensal do vendedor %f", salario);

    return 0;


}


