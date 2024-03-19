#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b;
    int soma;

    printf("Digite o primeiro numero: ");
    scanf("%i",&a);
    printf("Agora o segundo: ");
    scanf("%i",&b);

    soma = a + b;
    printf("Essa e a soma: %i.",soma);


    return 0;
}