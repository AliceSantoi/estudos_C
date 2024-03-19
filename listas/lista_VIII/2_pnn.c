#include <stdio.h>
#include <locale.h>

/*2. Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa
se ele é positivo, negativo ou neutro*/

void pnn(int n);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	printf("Insira o número: ");
	scanf("%d",&num);
	
	pnn(num);
	
	
	
	
	return(0);
}

void pnn(int n){
	n > 0 ? printf("%d é positivo!",n) : n < 0 ? printf("%d é negativo!",n) : printf("%d é nulo!",n);
}
