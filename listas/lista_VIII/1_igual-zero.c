#include <stdio.h>
#include <locale.h>
/*1. Implemente uma fun��o, sem retorno, que recebe um valor inteiro por par�metro e
informa se �, ou n�o, igual a zero.*/

void igual(n); 

int main(){
	int n;
	setlocale(LC_ALL,"portuguese");
	
	printf("Insira o n�mero: ");
	scanf("%d",&n);
	igual();
	
	
	
	return(0);
}

void igual(n){
	if(n == 0){
		printf("� igual a zero!");
	}else{
		printf("N�o � igual a zero.");
	}
}
