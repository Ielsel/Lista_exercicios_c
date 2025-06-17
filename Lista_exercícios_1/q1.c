#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float real;
	printf("Digite um número real: ");
	scanf("%f", &real);
	
	if(real > 10){
		printf("O número digita é maior que 10!");
	}else if(real < 10){
		printf("O número digita é menor que 10!");
	}	
}
