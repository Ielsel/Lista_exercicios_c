#include <stdio.h>
#include <locale.h>

// Escreva um algoritmo que solicite ao usuário N valores numéricos e ao final apresente:
// Versão 1: O maior e menor número;

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
		
		printf("Deseja informar o próximo? 1/Sim - 2/Não\n");
		scanf("%i", &Resposta);
		
	}while(Resposta == 1);
	
	// Saída de dados
	printf("\n O maior %0.2f", Maior);
	printf("\n O menor %0.2f", Menor);
}
    
