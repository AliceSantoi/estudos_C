#include <stdio.h>
#include <stdlib.h>

//4

void main(){

    float valor,conv;

    printf("Digite o valor em cm: ");
    scanf("%f",&valor);

    conv = valor*100;

    printf("valor convertido em m: %.2f",conv);

}