#include <stdio.h>
#include <stdlib.h>

//7

void main(){
    float altura,imc;

    printf("Digite sua altura: ");
    scanf("%d",&altura);

    imc =  (72.7 * altura) - 58.0;

    printf("Seu peso ideal é:%f ",imc);




}