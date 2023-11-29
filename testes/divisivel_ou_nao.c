#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>//biblioteca de regionalização

//pedir dois números e conferir se o primeiro é divisível pelo segundo

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1,num2;

    printf("Digite os dois números inteiros:\n ");//no lugar de colocar dois printfs posso apagar um e entrar com dois números no scanf

    scanf("%d%d",&num1,&num2);//procurar outras funções de entrada

    if(num1%num2 == 0){
        printf("%d é divisivel por %d",num1,num2);

    }else{
        printf("%d não é divisivel por %d",num1,num2);
    }



    return 0;
}