/*Escreva um procedimento que recebe as 3 notas de um aluno por par�metro e uma letra. Se a letra for A o procedimento calcula a m�dia aritm�tica das notas do aluno, se for P, a sua m�dia ponderada (pesos: 5, 3 e 2) e se for H, a sua m�dia harm�nica. A m�dia calculada tamb�m deve retornar por par�metro.*/
#include <stdio.h>
#include <locale.h>//n�o funciona no visual studio

void medias(float n1,float n2,float n3,char l);
void mostra_tipo(char palavra);

int main(){
    setlocale(LC_ALL,"portuguese");

    float nota1,nota2,nota3;
    char letra;
    int resposta;
do{	
	printf("Escolha o tipo de m�dia:\nM�dia aritm�tica[A]\nM�dia ponderada[P]\nM�dia harm�nica[H]\n");
    printf("Escolha: ");
    scanf("%c",&letra);
    system("cls");
	
    mostra_tipo(letra);
	printf("\nDigite, respectivamente, suas notas:\n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    
    medias(nota1,nota2,nota3,letra);
    
    printf("\nDeseja continuar? sim[1] n�o[2]");
    scanf("%d",&resposta);
}while(resposta == 1);

    return(0);
}
  void medias(float n1,float n2,float n3,char l){
  	
  	l == 'A' || l == 'a' ? printf("Essa � sua m�dia aritm�tica: %.1f",(n1 + n2 + n3)/3) 
  		: l == 'P' || l == 'p' ? printf("Essa � sua m�dia ponderada: %.1f"),((n1 * 5) + (n2 * 3) + (n3 * 2))/5 + 3 + 2
  			: l == 'H' || l == 'h' ? printf("Essa � sua m�dia harm�nica: %.1f",3/(1/n1) + (1/n2) + (1/n3)) 
  				: printf("Insira uma op��o v�lida.");
  	
  	}


  void mostra_tipo(char palavra){
  	palavra == 'A' || palavra == 'a' ? printf("Voc� escolheu m�dia aritm�tica.") 
  		: palavra == 'P' || palavra == 'p' ? printf("Voc� escolheu m�dia ponderada.") 
  			: palavra == 'H' || palavra == 'h' ? printf("Voc� escolheu m�dia harm�nica.") 
  				: printf("Insira uma op��o v�lida.");
  }
    

    








