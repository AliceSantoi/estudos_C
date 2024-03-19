#include <stdio.h>
#include <stdlib.h>
//#include <locale.h> -> não está reconhecendo


int main(){
    //setlocale(LC_ID,"portuguese");
    float dolar,real,conv;

    printf("Qual a cotacao do dolar? ");
    scanf("%f", &dolar);

    printf("Valor a ser convertido (em real): ");
    scanf("%f",&real);

    conv = (real * dolar);

    printf("Valor de real para dolar: $%.1f",conv);




    return(0);
}