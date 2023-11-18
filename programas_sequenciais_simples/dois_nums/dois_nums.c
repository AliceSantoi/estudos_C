#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num1,num2,soma,calc,qua1,soQua,senDif,modNum1;

    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);

    printf("Agora o segundo: ");
    scanf("%f",&num2);
    
    //soma
    soma = num1 + num2;

    //O produto do primeiro número pelo quadrado do segundo
    calc = num1 * pow(num2,2);
''
    // O quadrado do primeiro número
    qua1 = pow(num1,2);

    //A raiz quadrada da soma dos quadrados
    soQua = sqrt(qua1 + pow(num2,2));

    // O seno da diferença do primeiro número pelo segundo;
    //"cos(a – b) = cos(a) · cos (b) + sen (a) · sen (b)"

    senDif = cos(num1) * cos(num2) + sin(num1) * sin(num2);

    // O módulo do primeiro número.
    modNum1 = abs(num1);

    printf("%.1f\n",soma); //como reduzir o número de printfs?
    printf("%.1f\n",calc);
    printf("%.1f\n",qua1);
    printf("%.1f\n",soQua);
    printf("%.1f\n",senDif);
    printf("%.1f",modNum1);
    return 0;
}


