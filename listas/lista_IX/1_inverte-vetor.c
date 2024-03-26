#include <stdio.h>
#include <locale.h>

/*1. Escreva um programa que solicita e armazena oito valores inteiros em um vetor,
denominado de A, e exibe os valores armazenados, porém na ordem inversa.
*/

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int a[8],i;
	
	for(i = 0; i < 8; i++){
		printf("Digite o %dº número: ",i + 1);
		scanf("%d",&a[i]);
	}	
	
	printf("Vetor invertido:\n");
	
	for(i = 7; i >= 0; i--){
		printf("%d\n",a[i]);
	}
	
	
	
	
	return(0);
}
