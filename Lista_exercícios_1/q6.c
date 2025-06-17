#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real, test;
	
	printf("Informe o múltiplo a ser testado: ");
	scanf("%i", &test);
	
	printf("Digite um número: ");
	scanf("%i", &real);
	
	if(real % 3 == 0){
		printf("O número %i é múltiplo de %i", real, test);
	}else{
		printf("O número %i não é múltiplo de %i", real, test);
	}
}
