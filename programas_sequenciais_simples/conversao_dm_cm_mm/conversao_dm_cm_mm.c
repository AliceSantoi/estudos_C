#include <stdio.h>
#include <stdlib.h>

int main(){
    float m = 0,dm,cm,mm,valorF;

    printf("Insira valor em metros: ");
    scanf("%f",&m);

    dm = (m * 10);
    cm = (m * 100);
    mm = (m * 1000);

    printf("valor de %.0fm em:\n dm: %.f\n cm: %.f\n mm: %.f ",m,dm,cm,mm);

    return 0;
}