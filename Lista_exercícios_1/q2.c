#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float real;
	
	printf("Digite um número real: ");
	scanf("%f", &real);
	
	if(real >= 10){
		printf("O número %.1f é maior ou igual a 10", real);
	}else{
		printf("O número %.1f é menor que 10", real);
	}
}
