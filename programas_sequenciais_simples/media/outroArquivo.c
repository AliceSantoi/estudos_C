#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota,media,cont = 0;
    int i;
    
        for(i = 1;i <= 10; i++){
            printf("Insira o numero: ");
            scanf("%f",&nota);
            cont = cont + nota;
        }

    media = cont/3;
    printf("A media e: %.1f",media);



    
    
    return 0;
}