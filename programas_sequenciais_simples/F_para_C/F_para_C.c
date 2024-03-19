/*Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
seguem*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int gF1,gC1;
    double gC2;

    printf("Digite o valor: ");
    scanf("%i",&gF1);

    
    gC1 = (gF1 - 32) * (5/9);/*da pra fazer função*/

     printf("Fahrenheit para Celsius com int: %i\n",gC1);

    gC2 = (gF1 - 32.0) * (5.0 / 9.0);/*aqui tambem da uma função*/

     printf("Fahrenheit para Celsius com double: %f"),gC2);
   



    return 0;
}