#include <stdio.h>
#include <locale.h>

// Escreva um algoritmo que solicite ao usu�rio N valores num�ricos e ao final apresente:
// Vers�o 1: O maior e menor n�mero;

int main(){
	setlocale(LC_ALL,"");
	
	float Valor, Maior, Menor;
	int Resposta, Qtd = 0;
	
	do{
		Qtd++;
		
		// Entrada de dados
		
		printf("Informe o %i valor: ", Qtd);
		scanf("%f", &Valor);
		
		// Processamento de dados
		
		if(Qtd == 1 or Valor > Maior){
			Maior = Valor;
		}
		
		if(Qtd == 1 or Valor < Menor){
			Menor = Valor;
		}
		
		printf("Deseja informar o pr�ximo? 1/Sim - 2/N�o\n");
		scanf("%i", &Resposta);
		
	}while(Resposta == 1);
	
	// Sa�da de dados
	printf("\n O maior %0.2f", Maior);
	printf("\n O menor %0.2f", Menor);
}
    
