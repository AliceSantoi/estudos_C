#include <stdio.h>
#include <locale.h>

/*4. Escreva um programa que solicita e armazena dez n�meros inteiros em um vetor e,
ao final, informa o maior valor encontrado no vetor*/

int main(){
	int num[10],i,maior = 0;

	for(i = 0;i < 10;i++){
		printf("Insira o %d valor: ",i + 1);
		scanf("%d",&num[i]);
	}

	for(i = 0;i < 10;i++){
		if(num[i] > maior){
			maior = num[i];
		}
	}
	printf("O maior é: %d",maior);
	
	
	
	
	return(0);
}
