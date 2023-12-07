#include <stdio.h>
#include <stdlib.h>

//7

void main(){
    int varH,numH,total;

    printf("Valor por hora: ");
    scanf("%d",&varH);

    printf("Horas trabalhadas: ");
    scanf("%d",&numH);

    total = varH * numH;

    printf("Salário ganho por mês: %d",total);


}