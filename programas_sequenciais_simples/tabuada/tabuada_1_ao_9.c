#include <stdio.h>
#include <stdlib.h>

int main(){ 
    
    int num;

    
    printf("---------------------\n");
    printf("TABUADA DO 1 AO 9\n");
    printf("---------------------\n");
    printf("Digite o numero: ");
    scanf("%i",&num);

    for(int i=1;i<=9;i++){
        printf("\n%d x %d = %d\n ",i,num,num * i);
    }
        
    return 0;
}