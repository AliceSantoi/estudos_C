#include <stdio.h>
#include <stdlib.h>

int main(){ 
    
    int num,i,resul = 0;
    
    printf("---------------------\n");
    printf("TABUADA DO 1 AO 9\n");
    printf("---------------------\n");
    printf("Digite o numero: ");
    scanf("%i",&num);

    for(i=1;i<=9;i++){
        resul = (num * i);
        printf("\n%d x %d = %d\n ",num,i,resul);
    };

    return 0;
}