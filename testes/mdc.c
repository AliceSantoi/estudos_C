//crie um programa que encontre o maximo diisor comum entre dois numeros 


#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int i;
    int num1,num2,a,b,resto;

    printf("Digite dois numeros: ");
    scanf("%d,%d", &num1,&num2);

    
    a = num1; b = num2;

    do{
        resto = a % b;
        a = b;
        b = resto;
    }while(resto!=0);
    printf("O mdc de %d e %d e: %d\n",num1,num2,a);

   

}