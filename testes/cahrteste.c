#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>

// Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.

void main(){

int num, cont=0;

printf("Insira o numero: ");
scanf("%d",&num);

for(int i=1;i<=num;i++){
        if(num%i == 0)
            cont++;
}
    if(cont == 2)
        printf("O numero %d e primo",num);
    else
        printf("O numero %d não e primo",num);




}