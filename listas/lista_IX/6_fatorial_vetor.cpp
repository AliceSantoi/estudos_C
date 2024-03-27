/*6. Faça um programa que solicita e armazena em um vetor, denominado de v1, cinco
números inteiros maiores ou iguais a zero. Construa outro vetor, denominado de v2,
do mesmo tipo e tamanho de v1, onde cada valor de v2 deve ser definido com o
resultado do fatorial de cada elemento correspondente em v1.
Ao final, o programa deve exibir o conteúdo dos vetores v1 e v2.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int v1[5],v2[5],i;
	
	for(i = 0;i < 5;i++){
		do{
			printf("Digite o %d número:", 1 + i);
			scanf("%d",&v1[i]);
		}while((v1[i] < 0));
		
		for(v2[i] = 1; v1[i] > 1;v1[i]--){
			v2[i] *= v1[i];
		}
		printf("%d!\n\n",v2[i]);
	}
	
	
	
	
	return (0);
}
