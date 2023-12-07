#include <stdio.h>
#include <stdlib.h>

//1

void main(){
    float nota,media,num;

    for(int i = 1;i <= 4;i++){
        printf("Digite a nota: ");
        scanf("%f",&num);
        nota+=num;

    }
    media = nota/4;
     
    printf("resultado: %.2f",media);




}