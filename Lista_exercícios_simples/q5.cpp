#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real;
	
	printf("Digite um número: ");
	scanf("%i", &real);
	
	if(real % 3 == 0){
		printf("O número %i é múltiplo de 3", real);
	}else{
		printf("O número %i não é múltiplo de 3", real);
	}
}
