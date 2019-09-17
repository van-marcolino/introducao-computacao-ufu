

include <stdlib.h>


int main()

{ float a, b, c, d, e, f, resultado;

  printf("digite o valor das variaveis \n");

  scanf("%f %f %f %f %f %f \n", &a, &b, &c, &d, &e, &f);

  resultado=(a*a)-c+(a/(b*c)+(c/(d+(e/f))));

  printf("resultado %.2f", resultado);

return 0;

}




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





#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

float x, y, m, n, h, w, c, aux1, aux2;

printf("inserir valores das variaveis x, y, m, n, h, w \n");

scanf("%f %f %f %f %f %f", &x, &y, &m, &n, &h, &w);

aux1= x/h;

aux2=m*n;

aux2=m/aux2;

aux1=aux1+aux2;

c=2.0/3.0;

aux2=pow(w,c);

aux1=aux1-aux2;

printf("%f", aux1);

return 0;

}




#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

float x, y, z, resultado;

int i, j, k;

printf("insira as variaveis \n");

scanf("%f %f %f %f %f %f \n", &x, &y, &z, &i, &j, &k);


resultado=x+y*i;

printf("resultado %.2f \n", resultado);


resultado=i/j+x;

printf("resultado %.2f \n", resultado);


resultado=i*x+j*y;

printf("resultado %.2f \n", resultado);


resultado=i%(j+y);

printf("resultado %.2f \n", resultado);


resultado=x+y<i+j;

printf("resultado %.2f \n", resultado);


resultado=x<y^y<z;

printf("resultado %.2f \n", resultado);


resultado=i+j-k;

printf("resultado %.2f \n", resultado);


resultado=k-abs(x*i);

printf("resultado %.2f \n", resultado);


resultado=x=i;

printf("resultado %.2f \n", resultado);


return 0;


}




#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

float a, t, x;

printf("valor de a=");

scanf("%f", &a);

printf("valor de t=");

scanf("%f", &t);

x=(a*t*t)/2;

printf("distancia percorrida %f", x);

return 0;


}





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





#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float x, y, z, resultado;

    printf("insira o valor das variaveis \n");

    scanf("%f %f %f", &x, &y, &z);

    resultado=(x+y+z)/3;

    printf("resultado da media %f", resultado);

    return 0;


}





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





#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float salario, aumento, porcentagem, novosalario;

    printf("insira o valor do salario e o percentual\n");

    scanf("%f %f", &salario, &porcentagem);

    aumento=salario*porcentagem;

    printf("aumento %.2f \n", aumento);

    novosalario = salario+aumento;

    printf("novo salario %.2f \n", novosalario);

    return 0;

}




#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float m1, m2, d, f, g;

    printf("insira as variaveis m1, m2 e d \n");

    scanf("%f %f %f", &m1, &m2, &d);

    g=6.670*(10^(-11));

    f=g*m1*m2/(d*d);

    printf("a magnitude da forca gravitacional de newton e = %f", f);

    return 0;

}





#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float area, perimetro, pi, raio;

    printf("insira o valor do raio \n");

    scanf("%f", &raio);

    pi=3.14;

    area=pi*(raio*raio);

    perimetro=2*pi*raio;

    printf("valor da area %f \n", area);

    printf("valor do perimetro %f \n", perimetro);

    return 0;

}




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




#include <stdio.h>

#include <stdlib.h>

#include <math.h>


int main(){

    float a, b, c, x1, x2;

    printf("insira os valores de a, b e c \n");

    scanf("%f %f %f", &a, &b, &c);

    if(a != 0){

        x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);

        x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

            printf(" x1= %f x2= %f", x1, x2);

    }

    else{

         printf("nao existe resposta");

    }


    return 0;

}



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
