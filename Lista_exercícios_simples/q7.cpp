#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real;
	
	printf("Digite um número: ");
	scanf("%i", &real);
	
	if(real % 2 == 0){
		printf("O número %i é par", real);
	}else{
		printf("O número %i é ímpar", real);
	}
}
