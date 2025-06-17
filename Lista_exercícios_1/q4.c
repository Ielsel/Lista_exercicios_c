#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float real;
	
	printf("Digite um número real: ");
	scanf("%f", &real);
	
	if(real > 0){
		printf("O número %.1f é positivo", real);
	}else if(real < 0){
		printf("O número %.1f é negativo", real);
	}else{
		printf("O número %.1f é nulo", real);
	}
}
