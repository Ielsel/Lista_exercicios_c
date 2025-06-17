#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um algoritmo que solicite ao usuário N valores numéricos e ao final apresente:
// Versão 2: As medidas de tendência central Media, Moda, Mediana;

/* A função "compare" retorna um valor negativo se o primeiro elemento for menor que o segundo, zero se forem iguais, e um valor positivo se o primeiro for maior. 
Isso orienta a qsort() sobre como organizar os elementos.*/

int compare(const void *a, const void *b) {
    return (*(float*)a - *(float*)b);
}

int main(){
	setlocale(LC_ALL,"");
	
	float Media, Moda, Mediana;
	int n, Resposta, maxfreq = 0;
	
	// Entrada de dados
	
	printf("Informe a quantidade de elementos numéricos que deseja inserir: ");
	scanf("%d", &n);
	
	float Valores[n], Vetorfreq[n] = {0};
	
	for(int i = 0; i < n; i++){
		printf("Digite o %iº valor: ", i+1);
		scanf("%f", &Valores[i]);
	}
	
	// Processamento de dados
	
	for(int i = 0; i < n; i++){
		Media += Valores[i];
	}
	Media = Media/n;
	
	
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(Valores[i] == Valores[j]){
				Vetorfreq[i]++;
			}
		}
		
		if(maxfreq < Vetorfreq[i]){
			maxfreq = Vetorfreq[i];
		}
	}
	
	if(maxfreq == 1){
		printf("\n A moda é: amodal");
	}else{
		for(int i = 0; i < n; i++){
			if(maxfreq == Vetorfreq[i]){
				Moda = Valores[i];
			}
		}
	}
	
	
	qsort(Valores, n, sizeof(float), compare);
	
	if(n % 2 == 1){
		Mediana = Valores[n/2];
	}else{
		Mediana = Valores[(n/2)-1] + Valores[(n/2)];
		Mediana /= 2;
	}
	
	// Saída de dados
	
	printf("\n A média é: %0.1f", Media);
	printf("\n A moda é: %0.1f", Moda);
	printf("\n A mediana é: %0.1f", Mediana);

}
    
