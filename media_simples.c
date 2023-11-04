#include <stdio.h>
#include <stdlib.h>

int main(){

	float salarioM,salarioP,quantS;
	
	printf("Informe o valor do salario minimo:\nR$ ");
	scanf("%f",&salarioM);
	
	printf("Informe o valor do seu salario:\nR$ ");
	scanf("%f",&salarioP);
	
	quantS = (salarioP/salarioM);
	
	printf("\nVoce recebe %.1f salarios minimos",quantS);
	
	
	
    return 0;
}

