#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//continuar em: linha(54) - procurar como limpar a tela apos entrada de valores
//comentario de teste


void linha(){
    printf("--------------------------------\n");
}

//soma
void soma(float a, float b){
    float som;
    som = a + b;
    printf("A soma de %.1f + %.1f e: %.1f\n",a,b,som);
    linha();
}

//O produto do primeiro número pelo quadrado do segundo
void produto(float c, float d){
    float calc;
    calc = c * pow(d,2);
    printf("O produto do primeiro numero pelo quadrado do segundo: %.1f\n",calc);
     linha();
}

// O quadrado do primeiro número
 void quadrado(float e, float f){
    float qua1; 
    qua1 = pow(e,2);
    printf("O quadrado do primeiro numero: %.1f\n",qua1);
     linha();
 } 

 //A raiz quadrada da soma dos quadrados
 void somQua(float g, float h){
    float soQua;
    soQua = sqrt(pow(g,2) + pow(h,2));
    printf("A raiz quadrada da soma dos quadrados: %.1f\n",soQua);
     linha();
 } 

 // O seno da diferença do primeiro número pelo segundo;
 //"cos(a – b) = cos(a) · cos (b) + sen (a) · sen (b)"
void senoDif(float i, float j){
    float senDif;
    senDif = cos(i) * cos(j) + sin(i) * sin(j);
    printf("O seno da diferença do primeiro numero pelo segundo: %.1f\n",senDif);
     linha();
}

// O módulo do primeiro número.
void modNumOne(float k, float l){
    float modNum1;
     modNum1 = abs(k);
     printf("O módulo do primeiro numero: %.1f\n",modNum1);
      linha();
}

void main(){
    float num1,num2;

    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);

    printf("Agora o segundo: ");
    scanf("%f",&num2);
    system("cls");

    soma(num1,num2); //como reduzir o número de printfs?
    produto(num1,num2);
    quadrado(num1,num2);
    somQua(num1,num2);
    senoDif(num1,num2);
    modNumOne(num1,num2);

    
}


