#include <stdio.h>
#include <locale.h>
/*1. Implemente uma função, sem retorno, que recebe um valor inteiro por parâmetro e
informa se é, ou não, igual a zero.*/

void igual(n); 

int main(){
	int n;
	setlocale(LC_ALL,"portuguese");
	
	printf("Insira o número: ");
	scanf("%d",&n);
	igual();
	
	
	
	return(0);
}

void igual(n){
	if(n == 0){
		printf("é igual a zero!");
	}else{
		printf("Não é igual a zero.");
	}
}
